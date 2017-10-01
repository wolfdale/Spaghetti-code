abstract class runner{
	static void printme(){
		System.out.println("This is allowed");
	}
	abstract void impl();
}

class impl extends runner{
	public void impl(){
		System.out.println("Implemented");
	}
	public static void main(String[] args){
		//Lets see if can have object of abstract class => not allowed
		runner ru = new runner();
		impl im = new impl();
		im.impl();
		//calling static member
		runner.printme();
	}
}
