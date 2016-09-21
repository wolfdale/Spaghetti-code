class TypeWrapper{
	public static void main(String [] args)
	{
		//Boxing
		Integer i = new Integer(3);	
		//UN-Boxing
		int x = i.intValue();
		System.out.println("Value of Both Integer Object and value "+i +" "+x);
	}
}
