import java.util.InputMismatchException;
import java.util.Scanner;



public class input {



	public static void main(String[] args) {
		
		int x;
		Scanner ninga = new Scanner(System.in);
		try
		{
			x = ninga.nextInt();
			if(x%2==0)
			{
				System.out.println("Number is EVEN");
			}
			else
			{
				System.out.println("Number is ODD");
			}
		}
		catch(InputMismatchException e)
		{
			System.out.println(e);
		}
		
	}

}
