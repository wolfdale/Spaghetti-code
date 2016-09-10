//Instance variable hiding
class A{
	int i;
}
class B extends A{
	int i; //local to B
	B(int y,int x)
	{
		i = y;
		super.i = x;
	}
	void show(){
		System.out.println("value i in super class from subclass "+super.i);
		System.out.println("value of i in subclass "+ i);
	}
}


class DemoSuper{
	public static void main(String [] args)
	{
		
		B obj_b = new B(6,7);
		obj_b.show();
	}
}
