
class boxdemo
{
	int width;
	int height;
	int depth;
	//Constructor
	boxdemo()
	{
		width = -1;
		height = 1;
		depth = 1;
		
	}
	
	int volume()
	{
		return(width*height*depth);
	}
}

public class DemoConstructor {
	public static void main(String[] args) {
		boxdemo mybox = new boxdemo();
		//Default Volume
		int vol = mybox.volume();
		System.out.println(vol);
		
		
		
	}
}
