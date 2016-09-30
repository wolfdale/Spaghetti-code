class Quick_Palindrome{
	public static void main(String[] args)
	{
		String str = "aabbaa";
		StringBuilder rev_str = new StringBuilder(str);
		rev_str.reverse();
		if(rev_str.toString().equals(str)){
			System.out.println("True");
		}
		System.out.println("False");
	}
}
