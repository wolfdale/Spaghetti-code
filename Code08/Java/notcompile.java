class x{
	
}
class y extends x{
	y(int a){}
}
class z extends y{
	z(){}
}
class WillNotCompileDueToConstructorMismatch{
	public static void main(String [] arg ){
		z b = new z();
	}
}
