//Double checked locaking singleton Design Pattern

class Logging{
	//Final Static private obj
	private static Logging SingleInstance=null;

	/*Private constructor*/
	private Logging(){
		System.out.println("Private Constructor");
	}
	//Accesor Method for private obj
	public static Logging getSingleInstance()
	{
		if(SingleInstance == null)
		{ // Single check
			synchronized(Logging.class)
			{
				if(SingleInstance == null)
				{ //Double check
					SingleInstance = new Logging();
				}	
			}
		}
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



