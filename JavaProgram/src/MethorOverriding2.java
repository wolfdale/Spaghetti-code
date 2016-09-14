class A{
	int a,b;
	A(int x, int y){
		a = x;
		b = y;
		System.out.println("Constructor of A");
	}
	void show()
	{
		System.out.println("values are "+a+b);
	}
}
class B extends A{
	int t;
	B(int x,int y,int z){
		super(x,y);
		t = z;
		System.out.println("Constructor of B");
	}
	//Methord overriding
	void show()
	{
		//Calling superclass method
		super.show();
		System.out.println("values are "+a+b+t);
	}
}

class MethorOverriding2{
	
	public static void main(String [] args)
	{
		//Constructor are Called super to sub class
		B obj = new B(5,4,3);
		obj.show();
	}
	
}
