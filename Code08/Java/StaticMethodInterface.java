interface X1{
	public default void M1(){
		System.out.println("X1M1");
	}
	public static void MS(){
		System.out.println("MS -> Static");
	}
}

class Runner implements X1{
	//Multiple inheritance problem
	//Here it is must to redefine M1 method for compilation
	public void M1(){
		System.out.println("Runner");
	}
	void callStaticOfInterface(){
		X1.MS();
	}
}

class Activator{
	public static void main(String[] agr){
		Runner xyz = new Runner();
		xyz.M1();
		xyz.callStaticOfInterface();
	}
}
