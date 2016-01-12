
public class String_Methods {

	public static void main(String[] args) {
		
		
		String str = "Java is best !";
		
		System.out.println(str.toUpperCase());
		System.out.println(str.toLowerCase());
		
		System.out.println(str.trim());//removes all white spaces
		
		System.out.println(str.startsWith("Ja")); 
		System.out.println(str.endsWith("!"));
		
		String rep_str = str.replace("Java", "Kava");
		System.out.println(rep_str);
	}

}
