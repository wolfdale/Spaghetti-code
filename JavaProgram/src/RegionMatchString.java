import java.lang.*;
class RegionMatchString{
	public static void main(String [] args){
		String str1 = "ThisIsSoCool";
		String str2 = "IsSo";
		
		//Region MAtch inside string
		// int -> start index of str1
		// string -> string 2
		// int -> start index of str2
		// int -> nos of char to match
		System.out.println(
			str1.regionMatches(4,str2,0,4)
		);
	}
}
