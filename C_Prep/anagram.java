import java.util.Arrays;

class anagram{
	public static void main(String [] args)
	{
		String orig = "Hello world ? world hello";
		String[] compare = orig.split("\\?");
		
		String corr_str1 = compare[0].replaceAll("[^a-zA-Z]+","");
		String corr_str2 = compare[1].replaceAll("[^a-zA-Z]+","");
		char ch1[] = corr_str1.toLowerCase().toCharArray();
		char ch2[] = corr_str2.toLowerCase().toCharArray();
		Arrays.sort(ch1);
		Arrays.sort(ch2);
		String sorted_string1 = new String(ch1);
		String sorted_string2 = new String(ch2);
		System.out.println(sorted_string1);
		System.out.println(sorted_string2);
		System.out.println(sorted_string1.equals(sorted_string2));	
	}
}
