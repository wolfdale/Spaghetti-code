class Box{
	int width;
	int height;
	int length;
	
	Box(int a,int b,int c){
		width=a;
		height=b;
		length=c;
	}
	//Overriding toString method in Object class
	//to print content of object in string
	//keyword public is important
	public String toString(){
		return "Dimensions are "+width+height+length;
	}
}

class DemoToString{
	public static void main(String [] args)
	{
		Box b1 = new Box(4,5,6);
		System.out.println(b1);
	}
}
