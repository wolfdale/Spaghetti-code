interface X1{
	void callme();
}

interface X2{
	void callme(String mgs);
}
//NOte we have to provide both implementations of method callme
class Runner implements X1,X2{
	//Overloaded
	public void callme(){
		System.out.println("No param Call me");
	}
	
	public void callme(String msg){
		System.out.println(msg);
	}
}

class Activator{
	public static void main(String[] agr){
		Runner xyz = new Runner();
		xyz.callme();
		xyz.callme("one Param Overloaded");
		
	}
}
