class box
{
	int width;
	int height;
	int depth;
	
	int volume()
	{
		return(width*height*depth);
		
	}
	
}

public class BoxClass {

	public static void main(String[] args) {
	
		box mybox = new box();
		
		mybox.width = 30;
		mybox.height = 40;
		mybox.depth = 50;
		int vol = mybox.volume();
		
		System.out.println("The volume of Box is " + vol);

	}

}
