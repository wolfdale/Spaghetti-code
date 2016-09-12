class SimpleException2
{
	public static void main (String[] args) throws java.lang.Exception
	{
		int a = 5;
		try{
			int b = a/0;
			System.out.println("This will never Execute");
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
