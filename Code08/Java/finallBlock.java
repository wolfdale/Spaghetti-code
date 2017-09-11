class Runner{
	static int j=0;
	static int XOP(){
		
		try {
			j = 1;
			throw new Exception();
		}
		catch(Exception e){
			j+=1;
			return j;//this will not return as finally block will execute first
		}
		finally{
			
			j=j+3;
			return j;
		}
	
	}
	public static void main(String[] args){
		System.out.println(XOP());	
	}
}
