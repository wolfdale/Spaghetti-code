//Simple stack Testing 

class StackCode
{
	
	int[] arr = new int[10];
	
	private int top = -1;
	
	void push (int x)
	{
		top++;
		arr[top] = x;
	}
	
	void pop()
	{
		top--;
	}
	
	void display()
	{
		for(int i=0;i<=top;i++)
		{
			System.out.println(arr[i]);
		}
	}
	
	
}


public class stack {

	public static void main(String[] args) {
		
		StackCode sck = new StackCode();
		
		sck.push(5);
		sck.push(10);
		sck.push(20);
		sck.pop();
		
		sck.display();

	}

}
