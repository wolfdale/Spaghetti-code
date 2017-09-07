class TrickyOverload{
	//This one will be called
	void caller(int i){
		System.out.println("Primitive");
		System.out.println(i);
	}
	
	void caller(Integer x){
		System.out.println("Object");
		System.out.println(x);
	}
	
	public static void main(String[] args){
		TrickyOverload ov = new TrickyOverload();
		ov.caller(1);
		//ov.caller(new Integer(6));
	}
}
