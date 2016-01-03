import java.util.Scanner;

class Rev
{
	int revnumb(int x)
	{
		
		int _rev=0;
		while(x != 0)
		{
			_rev = _rev *10;
			_rev = _rev + x%10;
			x = x/10;
		}
		
		return _rev;
	}
	
	
}
public class RevNumber {

	public static void main(String[] args) {
		
		int number,rev_number;
		Scanner Input = new Scanner(System.in);
		number = Input.nextInt();
		
		Rev obj = new Rev();
		
		rev_number = obj.revnumb(number);
		System.out.println(rev_number);
	}

}
