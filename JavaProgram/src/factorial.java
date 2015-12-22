class recurfact
{
	int fact;
	
	int factorial(int fact)
	{
		if(fact<=0)
		{
			return 1;
		}
		else
		{
			return(fact*factorial(fact-1));
		}
	}
	
	
}





public class factorial {

	public static void main(String[] args) {
		//Create object
		recurfact myfactorial = new recurfact();
		
		int output = myfactorial.factorial(5);
		System.out.println(output);
	}

}
