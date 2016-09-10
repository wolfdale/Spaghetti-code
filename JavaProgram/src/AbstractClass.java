abstract class A{
	//abstarct method
	abstract void call();
	
	void print()
	{
		System.out.println("Concreete method of abstract class");
	}
}

class B extends A
{
	void call()
	{
		System.out.println("Call me declared abstract");
	}
}

class AbstractClass{
	public static void main(String [] args)
	{
		
		//Illegal abstract; cannot be instantiated
		//A obj_1 = new A();
		B b = new B();
		b.call();
		b.print();
		
		
	}
}
