//var createError = require('http-errors'); 
var http = require('http');
var express = require('express');
var path = require('path');
var cookieParser = require('cookie-parser');
var logger = require('morgan');
var static = require('serve-static');
var expressSession = require('express-session'),
  errorHandler = require('errorhandler'),
  expressErrorHandler = require('express-error-handler');

var mysql = require('mysql');

var pool = mysql.createPool({
  connectionLimit: 10,
  host: 'localhost',
  user: 'root',
  password: '123',
  database: 'world',
  debug: false
});

//var indexRouter = require('./routes/index');
//var usersRouter = require('./routes/users');

var app = express();

// view engine setup
//app.set('views', path.join(__dirname, 'views'));
//app.set('view engine', 'jade');

app.set('port', process.env.PORT || 5000);
app.use(logger('dev'));
app.use(express.json());
app.use(express.urlencoded({
  extended: false
}));
app.use(cookieParser());
app.use(express.static(path.join(__dirname, 'public')));

app.use(expressSession({
  secret: 'mycat',
  resave: true,
  saveUninitialized: true
}))


var router = express.Router();
app.use('/', router);

router.route('/members/addMember').post(function (req, res) {
  console.log('/members/addMember 요청됨')
  var paramId = req.body.id || req.query.id;
  var paramPwd = req.body.pwd || req.query.pwd;
  var paramName = req.body.name || req.query.name;
  var paramPhone = req.body.phone || req.query.phone;
  console.log(paramId + ',' + paramPwd + ',' + paramName + ',' + paramPhone);

  if (pool) {
    addUser(paramId, paramPwd, paramName, paramPhone, function (err, addedUser) {
      if (err) {
        console.log('사용자 추가 중 오류 :' + err.stack);
        res.writeHead(200, {
          "Content-Type": "text/html;charset=utf8"
        });
        res.write('<h1>에러발생</h1>');
        res.end();
        return;
      }
      if (addedUser) {
        console.dir(addedUser);
        console.log('inserted ' + addedUser.affectedRows + ' rows');
        var insertId = addedUser.insertId;
        console.log('추가한 레코드 ID: ' + insertId);

        res.writeHead(200, {
          "Content-Type": "text/html;charset=utf8"
        });
        res.write('<h1>사용자 추가 성공</h1>');
        res.write("<br><a href='/login.html'>로그인</a>");
        res.end();
        return;
      } else {
        res.writeHead(200, {
          "Content-Type": "text/html;charset=utf8"
        });
        res.write('<h1>사용자 추가 중 오류</h1>');
        res.write("<br><a href='/addMember.html'>되돌아가기</a>");
        res.end();
      }
    });
  } else {
    res.writeHead(200, {
      "Content-Type": "text/html;charset=utf8"
    });
    res.write('<h1>DB 연결 실패</h1>');
    res.end();
  }
});

router.route('/members/login').post(function (req, res) {
  console.log('/members/login 요청됨');
  var paramId = req.body.id || req.query.id;
  var paramPwd = req.body.pwd || req.query.pwd;
  console.log('요청 파라미터: ' + paramId + ', ' + paramPwd);

  if (pool) {
    authUser(paramId, paramPwd, function (err, rows) {
      if (err) {
        console.error('사용자 로그인 오류: ' + err.stack);
        res.writeHead(200, {
          "Content-Type": "text/html;charset=utf8"
        });
        res.write('<h1>로그인 중 오류 발생함</h1><hr>' + err.stack);
        res.end();
        return;
      }
      if (rows) {
        console.dir(rows);
        var username = rows[0].name;
        res.writeHead(200, {
          "Content-Type": "text/html;charset=utf8"
        });
        res.write('<h1>로그인 성공!</h1><hr>');
        res.write('<div><p>ID: ' + paramId + '</p></div>');
        res.write('<div><p>이름: ' + username + '</p></div>');
        res.write("<br><a href='/login.html'>다시 로그인</a>");
        res.end();
        return;
      } else {
        res.writeHead(200, {
          "Content-Type": "text/html;charset=utf8"
        });
        res.write('<h1>해당 사용자 없음!</h1><hr>');
        res.write("<br><a href='/login.html'>다시 로그인</a>");
        res.end();
        return;
      }
    });
  } else {
    res.writeHead(200, {
      "Content-Type": "text/html;charset=utf8"
    });
    res.write('<h1>DB 연결 실패</h1>');
    res.end();
  }
});




var addUser = function (id, pwd, name, phone, callback) {
  pool.getConnection(function (err, conn) {
    if (err) {
      if (conn) {
        conn.release();
      }
      callback(err, null);
      return;
    }
    var data = {
      'id': id,
      'pwd': pwd,
      'name': name,
      'phone': phone
    };
    var exec = conn.query('insert into members set ? ', data, function (err, result) {
      conn.release();
      console.log('실행 sql :' + exec.sql);
      if (err) {
        console.log('sql 실행 오류');
        console.dir(err);
        callback(err, null);
        return;
      }
      callback(null, result);
    });
  });
} //addUser() end


//로그인 처리 함수
var authUser = function (id, pwd, callback) {
  console.log('authUser 호출됨');
  pool.getConnection(function (err, conn) {
    if (err) {
      if (conn) {
        conn.release();
      }
      callback(err, null);
      return;
    }
    var col = ['id', 'pwd', 'name', 'phone'];
    var tablename = 'members';
    var exec = conn.query('select ?? from ?? where id=? and pwd=?', [col, tablename, id, pwd], function (err, rows) {
      conn.release();
      console.log('실행 대상 SQL: ' + exec.sql);

      if (err) throw err;
      if (rows.length > 0) {
        console.log('아이디 [%s], 패스워드 [%s] 사용자 찾음', id, pwd);
        callback(null, rows);
      } else {
        console.log('일치 사용자 못 찾음');
        callback(null, null);
      }
    });
  });
}


//catch 404 and forward to error handler
/*
app.use(function(req, res, next) {
  next(createError(404));
});
*/
var errorHandler = expressErrorHandler({
  static: {
    '404': './public/404.html'
  }
});
app.use(expressErrorHandler.httpError(404));
app.use(errorHandler);

// error handler
/*
app.use(function(err, req, res, next) {
  // set locals, only providing error in development
  res.locals.message = err.message;
  res.locals.error = req.app.get('env') === 'development' ? err : {};

  // render the error page
  res.status(err.status || 500);
  res.render('error');
});
*/

var appServer = http.createServer(app);
appServer.listen(app.get('port'), function () {
  console.log("express server started with port " + app.get('port'));
})
module.exports = app;