//reading a file using a nodejs app and Callbacks
var fs = require('fs');

fs.readdir('.', function(err,files){
	if(err){
		console.log("Error Reading"+err);
	}
	else{
		files.forEach(function(filename,fileIndex){
			fs.readFile(filename, function(err,buf){
				if(err){
					console.log("Reading files"+err);
				}
				else{
					console.log("File Name--->"+filename);
					console.log("File Content--->");
					console.log(buf.toString());
				}
			});
		});
	}
});

