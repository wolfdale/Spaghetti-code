class StringDemo{
	public static void main(String [] args)
	{
		char chr[] = {'j','a','v','a'};
		
		//Creating string and initilizing it in constructor.
		//if we modify array the string will remain uncahnged
		String str = new String(chr);
		System.out.println(str);
		
		//Creating string form particular index
		String str1 = new String(chr,1,2);
		System.out.println(str1);
		
		//String length 
		System.out.println(str1.length());
		
		//Java’s char type uses 16 bits to represent the basic Unicode character set, 
		// Internet uses arrays of 8-bit bytes constructed from the
		//ASCII character set
		
		byte char_set[] = {65,67,76,73,84,86};//Ascii values
		String str2 = new String(char_set);
		System.out.println(str2);
		String str3 = new String(char_set,1,4);
		System.out.println(str3);
		
	}
}
