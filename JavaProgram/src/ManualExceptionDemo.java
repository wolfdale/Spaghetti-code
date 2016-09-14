class MyDemoException extends Exception{
	private int detail;
	
	MyDemoException(int a)
	{
		detail = a;
	}
	
	public String toString(){
		return "DemoException [" + detail + "]";
	}
}

class ManualExceptionDemo {
 static void compute(int a) throws MyDemoException {
 System.out.println("Called compute(" + a + ")");
 if(a > 10)
 throw new MyDemoException(a);
 System.out.println("Normal exit");
 }
 public static void main(String args[]) {
 	try {
 		compute(1);
 		compute(20);
 	} catch (MyDemoException e) {
 		System.out.println("Caught " + e);
 	}
 }
}
