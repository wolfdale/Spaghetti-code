var dns = require('dns');

//DNS resolve
dns.resolve('www.google.com', function(err, addr){
	if(err){
		throw err;
	}
	console.log('DNS Resolve Addresses: ' +JSON.stringify(addr));
});

//DNS lookups
dns.lookup('www.google.com', 4,function(err, addr){
	if(err){
		 throw err;
	}
	console.log('DNS Lookup :' + JSON.stringify(addr));
});

//DNS Reverse

dns.reverse('74.125.200.147', function(err, addr){
	if(err){
		throw err;
	}
	console.log('DNS Reverse : '+JSON.stringify(addr))
});

