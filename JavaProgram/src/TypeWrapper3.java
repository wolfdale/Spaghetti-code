class TypeWrapper3{
	public static void main(String [] args)
	{
		//Boxing
		Integer i = new Integer(100);
		Integer j = new Integer(200);
		int k = i + j;
		//UN-Boxing
		System.out.println("Automatic Unboxing in expression "+k);
	}
}
