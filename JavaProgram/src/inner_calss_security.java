//Inner class providing a security by not allowing outside class objects to invoke innercalss methods.
class ideoe{
	class nestedclass{
		void printme(){
			System.out.println("This is inner class");
		}
	}
	void runner(){
		nestedclass x = new nestedclass();
		x.printme();
	}
}
class okay{
	public static void main(String[] agrs){
		ideoe xy = new ideoe();
		xy.runner();
	}
}
