interface X1{
	public default void M1(){
		System.out.println("X1M1");
	};
}

interface X2{
	public default void M1(){
		System.out.println("X2M2");
	}
}
class Runner implements X1,X2{
	//Multiple inheritance problem
	//Here it is must to redefine M1 method for compilation
	public void M1(){
		System.out.println("Runner");
	}
}

class Activator{
	public static void main(String[] agr){
		Runner xyz = new Runner();
		xyz.M1();
		
	}
}
