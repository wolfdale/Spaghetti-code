
public class String_Compare {

	public static void main(String[] args) {
		String s1 = new String("JAVA");
		String s2 = new String("JAVA");
		String s3 = new String("Java");
		String s4 = "Java";
		System.out.println(s1.equals(s2)); //Print True
		System.out.println(s2.equals(s3));//Prints false
		System.out.println(s2.equalsIgnoreCase(s3)); //Print True Ignore case

		if(s4 == s3)
		{
			System.out.println("This will Not print");
		}
		else
		{
			System.out.println("The = = operator compares references not values.");
		}
		
		s4 = s3.concat(s4);
		
		System.out.println("Concat String : " + s4);
		
		System.out.println(s1.substring(0,2)); //Substring of String
		

	}

}
