class area
{
	int a,b;
	
	void calarea(int a, int b)
	{
		System.out.println("Area of Rect.");
		System.out.println(a*b);

	}
	
	void calarea(int a)
	{
		System.out.println("Area of Circle");
		System.out.println(3.14*a*a);
		
	}
	
	
}

public class overload {

	public static void main(String[] args) {
		
		area something = new area();
		
		something.calarea(5);
		
		something.calarea(5 ,8);
		
	}

}
