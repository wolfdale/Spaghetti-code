class XCheck{
	void run(){
		System.out.println("running in XCheck");
	}
}

interface Xcess{
	void inter();
}

class XTime extends XCheck implements Xcess{
	void run(){
		System.out.println("running in XTime");
	}
	public void inter(){
		System.out.println("running in XTime Interface Method");
	}

}

class CBuild extends XTime{
	//Overding inter() ----Important to note
	public void inter(){
		System.out.println("running in Cbuild interface method");
	}
		
}

class runner{
	public static void main(String ... args){
		XTime xcre = new CBuild();
		xcre.inter();

		Xcess intf = new CBuild();
		intf.inter();

		Xcess intfx = new XTime();
		intfx.inter();


	}
}

