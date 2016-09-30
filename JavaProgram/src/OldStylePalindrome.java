class OldStylePalindrome{
	public static void main(String [] args)
	{
		String str = "HelllleH";
		int len = str.length();
		int flag = 0;
		for(int i=0 ;i<len/2;i++)
		{
			if(str.charAt(i) != str.charAt(len - i -1))
			{
				flag=1;
				System.out.println("False");
				break;
			}
		
		}
		if(flag != 1)
		{
			System.out.println("True");
		}
		
	}
	
}
