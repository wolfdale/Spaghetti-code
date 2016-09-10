class A{
	void call()
	{
		System.out.println("Version A");
	}
}
class B extends A{
	void call()
	{
		System.out.println("Version B");
	}
}
class C extends B{
	void call()
	{
		System.out.println("Version C");
	}
}

class Demoridding{
	
	public static void main(String [] args)
	{
		//Constructor are Called super to sub class
		A obj_1 = new A();
		B obj_2 = new B();
		C obj_3 = new C();
		//Make a referene Variable of Class A
		//a superclass reference variable can refer to a subclass object
		A r;
		r = obj_1;
		r.call();
		r = obj_2;
		r.call();
		r = obj_3;
		r.call();
	}
	
}
