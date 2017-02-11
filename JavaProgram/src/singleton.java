class Logging{
	//Final Static private obj
	private static final Logging SingleInstance = new Logging();

	/*Private constructor*/
	private Logging(){
		System.out.println("Private Constructor");
	}
	//Accesor Method for private obj
	public static Logging getSingleInstance(){
		return SingleInstance;	
	}
	public void log(String msg){
		System.out.println(msg);
	}
}
class runner{
	public static void main(String[] args){
		//Using directly class name
		Logging.getSingleInstance().log("LOL");
	}
}



