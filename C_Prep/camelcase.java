import java.util.Scanner;
//counting uppercases of Camel case typing
class camelcase{
	public static void main(String [] args){
		int count=1;
		String input;
		Scanner in = new Scanner(System.in);
		input = in.nextLine();
		System.out.println(input);
		for(int k = 0; k<input.length();k++)
		{
			if(Character.isUpperCase(input.charAt(k))){
				count++;
			}
		}
		System.out.println(count);	
	}
}
