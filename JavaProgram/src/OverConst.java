// Overloading Constructor
class Box_Demo
{
	int width;
	int depth;
	int height;
	
	//User Defined Initialization 
	Box_Demo(int w, int d ,int h)
	{
		width = w;
		depth = d;
		height = h;
	
	}
	
	//Default Initialization
	Box_Demo()
	{
		width = -1;
		depth = -1;
		height = -1;
	
	}
	
	int volume()
	{
		return(width*height*depth);
	}
	
}


public class OverConst {

	public static void main(String[] args) {
		// Program to overload Constructor

		Box_Demo un_init_Box_Demo = new Box_Demo();
		
		int un_vol = un_init_Box_Demo.volume();
		
		Box_Demo init_Box_Demo = new Box_Demo(5,4,3);
		
		int init_vol = init_Box_Demo.volume();
		
		System.out.println("The volume of uninti Box_Demo " + un_vol );
		System.out.println("The volume of inti Box_Demo " + init_vol );
		
		 
	}

}
