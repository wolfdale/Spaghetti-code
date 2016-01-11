import java.util.*;

public class StringDemo1 {

	public static void main(String[] args) {
		String s1 = "Java String"; //Creating String using Java String Literal
		
		char ch[] = {' ','J', 'a', 'v','a'};
		String s2 = new String(ch); //Creating String from Char Array
		
		String s3 = new String(" Hello Java ");
		
		System.out.println(s1+s2+s3);
		
	}

}
