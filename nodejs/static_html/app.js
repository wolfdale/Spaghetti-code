var express = require('express');
var app = express();

var path = require('path');

app.get('/',function(request,response){

	response.sendFile(path.join(__dirname +'/public'+'/index.html'));

});

app.listen(3005);
