//MultiCatch
class runner{
	public static void main(String[] args){
		try{
			int a = 1/0;
		}catch(ArithmeticException | ArrayIndexOutOfBoundsException e){
			System.out.println(e);
		}
	}
}
