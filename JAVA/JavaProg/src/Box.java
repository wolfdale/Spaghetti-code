
public class Box {
	int width;
	int height;
	int depth;
	
	int volume()
	{
		return(width*height*depth);
	}
	
	//Set dimemsions (put into class members)
	
	void setDim(int w, int h, int d)
	{
		width=w;
		height=h;
		depth=d;		
	}
	

}
