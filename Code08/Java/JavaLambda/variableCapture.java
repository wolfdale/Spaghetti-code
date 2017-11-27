interface Lambda{
	int func(int n);
}

class VariableCapture{
	public static void main(String[] args){
		Lambda lbd;
		int num = 10;
		
		lbd = (n) -> {
			n = n + num;
		//	num++; cannot modify local variables 
		//	illegal in lambda enclosure all
		//		local variable are effectively final
			return n;
		};
		
		System.out.println(lbd.func(10));
	}
}
