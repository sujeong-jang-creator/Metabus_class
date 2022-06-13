var express = require('express');
var path = require('path')

var app = express();    //express앱 객체 생성

app.use(express.static(path.join(__dirname, 'html')));

app.get('/', (req, res) => {
    res.sendFile(path.join(__dirname, 'myApp','html', 'main.html'))
})

app.get('/about', (req, res) => {
    res.sendFile(path.join(__dirname, 'myApp','html', 'about.html'))
})

server = app.listen(3000, function(){
    console.log("Express Application Server has started on port 3000");
})