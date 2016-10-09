//Reading a Simple file , lets say a package.json
var fs = require('fs');
//Never use ReaFileSync (Event loop blocked)
var content = fs.readFileSync('package.json');
var readble_content = fs.readFileSync('package.json').toString();
//If you print content directly it will print content buffer
//(Non readable)
console.log(content);
console.log(readble_content);

//reading file with callbacks 
//Async IO non-blocking call
fs.readFile('package.json', function(err, buf){
	console.log(buf.toString());
});
