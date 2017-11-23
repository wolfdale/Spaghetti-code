interface TestLambda{
	int arithmetic(int x, int y);
}

class runner{
	public static void main(String [] args){
		TestLambda myl;
		TestLambda add = (x,y) -> x+y;
		TestLambda mul = (x,y) -> x*y;
		TestLambda sub = (x,y) -> {
			if(x>y)
				return x-y;
			else
				return y-x;
		};
		TestLambda div = (x,y) -> {
			if(x==0 || y==0){
				return -1;
			}
			int temp = x/y;
			return temp;
		};
		System.out.println(add.arithmetic(5,6));
		System.out.println(mul.arithmetic(5,6));
		System.out.println(sub.arithmetic(5,66));
		System.out.println(sub.arithmetic(66,5));
		System.out.println(div.arithmetic(666,66));
		System.out.println(div.arithmetic(0,66));
	}
}
