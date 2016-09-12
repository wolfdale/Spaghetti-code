class SimpleException
{
	public static void main (String[] args) throws java.lang.Exception
	{
		int a = 5;
		try{
		int b = a/0;
		}
		catch(ArithmeticException e)
		{
			System.out.println("Exception Caught");
		}
	}
}
