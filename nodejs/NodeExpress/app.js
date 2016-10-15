var express = require('express');
var app = express();

app.get('/', function(request, response){
	response.json({ 'Message':'This is from Express' })
	});
app.listen(process.env.PORT|8080);
