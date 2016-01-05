class Outer_Class
{
	int x,y;
	//Constructor of Outer Class
	Outer_Class(int input1, int input2)
	{
		x = input1;
		y = input2;
	}
	
	
	//Method of Outer Class
	void Show_Content_Inner()
	{
		Inner_Class inner_obj = new Inner_Class();
		inner_obj.show();
		inner_obj.sum();
	}
	
	//Inner Class
	class Inner_Class
	{
		void show()
		{
			System.out.println(x);
			System.out.println(y);
		}
		void sum()
		{
			System.out.println(x+y);
		}
		
	}
	
	
	
}



public class NestedClass {

	public static void main(String[] args) {
		// Inner class have Access to the Variables of outer class
		
		//outer class object
		
		Outer_Class outer_obj = new Outer_Class(5,6);
		
		outer_obj.Show_Content_Inner();
		

	}

}
