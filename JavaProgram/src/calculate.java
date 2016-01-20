
public class calculate {

	public static void badMethod() throws RuntimeException{
		throw new RuntimeException();
	}
	
	
	public static void main(String[] args) {
		try{
			badMethod();
			System.out.println("Hello");
		}catch (RuntimeException e){
			System.out.println("Caught");
		}
		finally{
			System.out.println("World");
		}
		System.out.println("Continues Execution");
		calculate exception1 = new calculate();

	}

}
