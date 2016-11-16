import java.util.Scanner;

class palindrome{
	public static void main(String [] args){
		Scanner in = new Scanner(System.in);
		int x = in.nextInt();
		System.out.println("Original Number " + x);
		int temp=0,r;
		int temp2=x;
		while(x!=0){
			r = x%10;
			temp = (temp*10) + r;
			x=x/10;
			
		}
		if(temp==temp2){
			System.out.println("Plaindrome !!");
		}
		else{
			System.out.println("Not a Palindrome");
		}



	
	}
}	
