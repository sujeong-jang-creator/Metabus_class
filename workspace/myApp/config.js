const mysql = require('mysql');

const db = mysql.createConnection({
    host : 'localhost',
    user : 'root',
    password : '123',
    port : 3306,
    database : 'world'
})

db.connect();

module.exports = db;