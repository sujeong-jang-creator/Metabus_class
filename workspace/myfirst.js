var http = require('http');
var url = require('url');
var dt = require('./myfirstmodule');

http.createServer(function (req, res) {
  res.writeHead(200, {'Content-Type': 'text/html'});
  res.write("The date and time are currently: " + dt.myDateTime()+'<br>');
  res.write(req.url+"<br>");
var q = url.parse(req.url,true).query;
var userinfo=q.userid+","+q.userpwd;
res.write(userinfo+"<br>");
res.end();
}).listen(8000);