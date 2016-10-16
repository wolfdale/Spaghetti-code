//INdex Page Rendering

exports.index = function(request, response){
	response.render('index',{title:'Hey !',message: 'Im Pug'});
};
