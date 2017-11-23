interface TestLambda{
	int arithmetic(int x, int y);
}

class runner{
	public static void main(String [] args){
		TestLambda myl;
		TestLambda add = (x,y) -> x+y;
		TestLambda mul = (x,y) -> x*y;
		System.out.println(add.arithmetic(5,6));
		System.out.println(mul.arithmetic(5,6));
	}
}
