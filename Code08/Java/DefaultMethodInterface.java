interface X1{
	void M1();
}

interface X2{
	void M2();
}
interface WithDefault{
	public void M1();
	public void M2();
	public default void getDefault(){
		System.out.println("WithDefault");
	}
}
class Runner implements X1,X2,WithDefault{
	public void M1(){
		System.out.println("M1");
	}
	
	public void M2(){
		System.out.println("M2");
	}
	//Here we have always a choice to ovrride the default method
	//otherwise interface default is called
	@Override
	public void getDefault(){
		System.out.println("With Overrriden Default");
	}
}

class Activator{
	public static void main(String[] agr){
		Runner xyz = new Runner();
		xyz.M1();
		xyz.getDefault();
		xyz.M2();
	}
}
