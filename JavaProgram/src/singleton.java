class Logging{
	private static final Logging SingleInstance = new Logging();

	/*Private constructor*/
	private Logging(){
		System.out.println("Private Constructor");
	}
	public static Logging getSingleInstance(){
		return SingleInstance;	
	}
	public void log(String msg){
		System.out.println(msg);
	}
}
class runner{
	public static void main(String[] args){
		Logging.getSingleInstance().log("LOL");
	}
}



