class TypeWrapper2{
	static int AutoUnBox(Integer iob)
	{	//Automatically return value in iob
		return iob;
	}

	public static void main(String [] args)
	{
		//Boxing
		Integer i = AutoUnBox(3);	
		//UN-Boxing
		System.out.println("Automatic Unboxing "+i);
	}
}
