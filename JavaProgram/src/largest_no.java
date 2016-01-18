import java.util.*;


public class largest_no {

	public static void main(String[] args) {
		
		System.out.println("Enter number of elements");
		
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		
		int[] a = new int[n];
		
		for(int i=0;i<n;i++)
		{
			System.out.println("Enter Number");
			a[i] = sc.nextInt();
			
		}
		
		
		
		
		for(int i=0;i<n;i++)
		{
			System.out.println(a[i]);
		}
		

	}

}
