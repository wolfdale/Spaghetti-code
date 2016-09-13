import java.util.Random;

class SimpleExceptionDemo
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Random r = new Random();
		try{
			for ( ;; ){
			int a = r.nextInt();
			int b = r.nextInt();
			int c = 1234/(a/b);
			System.out.println("This will never Execute");
			}
		}
		catch(ArithmeticException e)
		{
			System.out.println("Exception Caught");
		}
		finally{
			System.out.println("Finally Block");
		}
	}
}
