class TrickyOverloadVargs{
	
	void caller(int ...x){
		System.out.println("Var Args");
		for(int i : x){
			System.out.println(i);	
		}
	}
	
	void caller(int x){
		System.out.println("Primitive");
		System.out.println(x);
	}
	
	public static void main(String[] args){
		TrickyOverload ov = new TrickyOverload();
		ov.caller(1,2,3,4);
		//ov.caller(new Integer(6));
	}
}
