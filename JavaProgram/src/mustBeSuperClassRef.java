class x{
	String runme(){
		return "X";
	}
}
class y extends x{
	String runme(){
		return "Y";
	}
}
class z extends y{
	String runme(){
		return "Z";
	}
}
class runner{
	public static void main(String[] args){
		x t1 = new y();
    x t2 = new z();
		//Invalid
    //z t2 = new x();
		System.out.println(t1.runme()+t2.runme());
		
	}
}
