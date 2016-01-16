/*StringBuffer is synchronized i.e. thread safe. It means two threads can't call the methods of StringBuffer simultaneously.*/
public class String_buff {

	public static void main(String[] args) {
	
		StringBuffer str1 = new StringBuffer("Hello ");
		
		str1.append("JAVA");
		
		str1.insert(0,"Well " );
		
		System.out.println(str1);
		
		str1.delete(0, 5);
		
		System.out.println(str1);
		
		str1.reverse();
		
		System.out.println(str1);
		
		str1.reverse();
		
		
		
		
		
	}

}
