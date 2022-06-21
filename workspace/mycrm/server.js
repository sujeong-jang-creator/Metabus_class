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
  password: 'mysql',
  database: 'world',
  debug: false
});
 

var app = express(); 
app.set('port', process.env.PORT || 5000);
app.use(logger('dev'));
app.use(express.json());
app.use(express.urlencoded({ extended: false }));
app.use(cookieParser());
app.use(express.static(path.join(__dirname, 'public')));

app.use(expressSession({
    secret : 'mycat',
    resave : true,
    saveUninitialized:true
}))

app.get('/', (req, res)=> {
    res.send({message : "Node Express + React 연동!!! "});
});

app.get('/api/customers', (req, res)=> {
    res.send([
      {
        id : 1,
        image : 'https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcS-etZ-Z-zdkFUJ3euhXsfQLgfOJS2U0Mo5CQ&usqp=CAU',
        name : '이몽령',
        birthday : '991111',
        gender : '남자',
        job: '군인',
      },
      {
        id : 2,
        image : 'https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcQVIohS9BvJQxxbgibybkdkRQaVCloWQPVEIg&usqp=CAU',
        name : '이순신',
        birthday : '950301',
        gender : '남자',
        job: '직장인',
      },
      {
        id : 3,
        image : 'https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcTLbnY4TcpZR-_ELeRMBmYbjzXLoA0ZATstsQ&usqp=CAU',
        name : '심청',
        birthday : '010501',
        gender : '여자',
        job: '학생',
      },
    ]);
});


var errorHandler = expressErrorHandler({
  static : {
    '404' : './public/404.html'
  }
});
app.use(expressErrorHandler.httpError(404));
app.use(errorHandler);

var appServer = http.createServer(app);
appServer.listen(app.get('port'), function(){
       console.log("express server started with port "+app.get('port'));
     }
     )
module.exports = app;
