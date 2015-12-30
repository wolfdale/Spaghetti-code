
public class UseStatic {
	
	static int a = 3;
	static int b;
	static void meth(int x)
	{
		System.out.println("x = " + x);
		System.out.println("a = " + a);
		System.out.println("b = " + b);
	}
	//Static block is always executed in first go . it is use to
	// initialized the static variables. 
	static
	{
		System.out.println("Static block Initialized.");
		b = a*4;
	}
	
	
	

	public static void main(String[] args) {
		meth(42);
	}

}
