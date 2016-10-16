import java.util.Scanner;
class duprm{
	public static void main(String [] args)
	{
		Scanner in = new Scanner(System.in);
		String str = in.next();
		for(int i = 1 ; i<str.length();i++)
		{

			System.out.println("------------>>" + str.charAt(i)+i);
			if(str.charAt(i) == str.charAt(i-1))
			{
				str = str.substring(0,i-1) + str.substring(i+1);
				i = 0;
				System.out.println("-->"+str);
			}
		}	
		if(str.length()==0){
			System.out.println("Empty String");
		}
		else{
			System.out.println(str);
		}
	}

}
