class DemoThread{
	public static void main(String [] args){
		Thread t1 =  Thread.currentThread();
		System.out.println("Current Thread " + t1);
		
		t1.setName("Demo Thread");
		
		System.out.println("Current Thread " + t1);
		try{
			Thread.sleep(2000);
			
		}catch(InterruptedException e)
		{
			System.out.println("Thread is Awake");
		}
	
	}	
	
}
