

public class String_build {

	public static void main(String[] args) {
		
		StringBuffer s1 = new StringBuffer("This is "); //Used to create mutable strings
		
		s1.append("JAVA !"); //appends sting 
		
		System.out.println(s1);
		
		s1.insert(0,"Start : ");//inserts the given string with this string at the given position.
		
		System.out.println(s1);
		
		s1.replace(0, 7, "Replaced: "); //replaces the given string from the specified beginIndex and endIndex
		
		System.out.println(s1);
		
		s1.reverse(); //reverse the string
		
		System.out.println(s1);
		
		s1.reverse();
		
		System.out.println(s1);
		
		
		
	}

}
