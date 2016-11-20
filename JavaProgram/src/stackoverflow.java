//This code will not compile due to recursive constructor
//calling.

class A{
	A(){
		this("Stack Overflow");
	}
	A(String x){
		this();
	}
}

class runit{
	public static void main(String[] args){
		A obj = new A();		
	}
}
