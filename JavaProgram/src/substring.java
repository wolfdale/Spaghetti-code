class substring_check{
	public static void main(String[] args){
		String str1 = "abc";
		String str2 = "okayabcdone";
		boolean x = str2.contains(str1);
		int pos = str2.indexOf(str1);
		System.out.println(x);
		System.out.println(pos);
	}
}
		
