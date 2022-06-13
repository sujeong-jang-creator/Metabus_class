var express = require('express');
var path = require('path');
var http = require('http');
var static = require('serve-static');
const bodyParser = require('body-parser');

var app = express();    //express앱 객체 생성

app.use(static(path.join(__dirname, 'public')));
// app.use(express.static(path.join(__dirname, 'html')));

// json형식으로 전달된 요청 파라미터를 파싱할 수 있습니다.
app.use(bodyParser.urlencoded({extended:true}));

app.get('/', (req, res) => {
    res.sendFile(path.join(__dirname, 'html', 'main.html'))
})

app.get('/about', (req, res) => {
    res.sendFile(path.join(__dirname, 'html', 'about.html'))
})

server = app.listen(3000, function(){
    console.log("Express Application Server has started on port 3000");
})