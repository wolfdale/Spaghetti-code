import java.util.*;

import java.io.*;

class JavaStrings
{
	public static void main (String[] args) 
	{
		String str1 = "Java";
		String str2 = "is cool !";
		String str3 = "Java";
		
		System.out.println();
		//length of string
		System.out.println(str1.length());
		//char at
		System.out.println(str1.charAt(2));
		//substring
		System.out.println(str2.substring(2));
		//substring
		System.out.println(str2.substring(2,5));
		//concat
		System.out.println(str1.concat(str2));
		//index OF(first occurance)
		System.out.println(str2.indexOf("cool"));
		boolean out = str3.equals(str1);
		System.out.println(out);
		out = "geeks".equalsIgnoreCase("GEEKS");
		System.out.println(out);
		
		//lexiographical comparision
		int out_ = "geeks".compareTo("GEEKS");
		System.out.println(out_);
		
	}
}
