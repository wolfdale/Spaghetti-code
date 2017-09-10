//This wil not compile as overriding method m1 is marked static in parent and not in child 
class Test1{
	static void m1(){
		System.out.println("this Method is marked static");
	}
	
	static void m2(){
		System.out.println("this Method is marked NON-static");
	}
	void z(){
		System.out.println("pppppppp");
	}
}

class Test2 extends Test1{
	static void m1(){
		System.out.println("this Method overriden is marked non static but marked static in parent");
	}
	
	static void m2(){
		System.out.println("Marked static but not marked static in Parent");
		
	}
	void z(){
		System.out.println("cccccccc");
	}	
	public static void main(String[] args){
		Test1 x = new Test1();
		//These method are called via object reference
		x.m1();
		x.m2();
		// this method is called via object
		x.z();
	}
}
