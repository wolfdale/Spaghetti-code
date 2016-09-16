class NewThread implements Runnable{
	Thread t1;
	
	NewThread(){
		t1 = new Thread(this,"This is Child Thread");
		System.out.println("Thread Name:  "+t1);
		t1.start();
	}
	
	
	public void run(){
		try{
			for(int i = 5 ;i>=0;i--)
			{
				System.out.println("ChildThread executing "+i);
				Thread.sleep(1000);
			}
		}
		catch(InterruptedException e)
		{
			System.out.println("Child Thread Intrrupted");
		}
		System.out.println("Child Thread Exiting");
	}


}

class  DemoRunnable{
	public static void main(String [] args)
	{
		//This Will Created a New Thread.
		new NewThread();
		try{
			for(int i = 5 ;i>=0;i--)
			{
				System.out.println("MAinThread executing "+i);
				Thread.sleep(500);
			}
		}
		catch(InterruptedException e)
		{
			System.out.println("MainThread Intrrupted");
		}
		System.out.println("MainThread Exiting");
	}

}
