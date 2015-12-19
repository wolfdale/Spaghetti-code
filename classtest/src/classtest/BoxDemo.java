package classtest;

public class BoxDemo {

	public static void main(String[] args) {
		
		Box mybox =new Box();
		
		mybox.width=10;
		mybox.depth=10;
		mybox.height=10;
		
		int vol = mybox.depth*mybox.height*mybox.width;
		
		System.out.println(vol);
		
		mybox.volume();
		
		
		
	}

}
