//This wil not compile as overriding method m1 is marked static in parent and not in child 
class Test1{
	static void m1(){
		System.out.println("this Method is marked static");
	}
	
	void m2(){
		System.out.println("this Method is marked NON-static");
	}
}

class Test2 extends Test1{
	void m1(){
		System.out.println("this Method overriden is marked non static but marked static in parent");
	}
	
	static void m2(){
		System.out.println("Marked static but not marked static in Parent");
		
	}
	
	public static void main(String[] args){
		Test2 x = new Test2();
		x.m1();
		x.m2();
	}
}
