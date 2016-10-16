/* Template Rendering */

var fs = require('fs');
var express = require('express');
var routes = require('./routes');
var http = require('http');
var path = require('path');
var cookieParser = require('cookie-parser');
var errorHandler = require('errorhandler');

var app = express();

//App Setting 
app.set('port', process.env.PORT||3001);
app.set('view engine', 'pug');
app.set('views',path.join(__dirname,'views'));

app.use(cookieParser());

app.get('/',routes.index);
app.use(errorHandler());
http.createServer(app).listen(app.get('port') , function(){
	console.log("Listening on 3000");
});



