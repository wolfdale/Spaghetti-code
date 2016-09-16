class NewThread extends Thread{
	
	NewThread(String str){
		//This will give Thread a name
		super(str);
		
		System.out.println("Create Child Thread");
		start();
	}
	
	public void run()
	{
		
		try{
			for(int i = 5 ;i>=0;i--)
			{
				System.out.println("Child Thread Executing "+i);
				sleep(500);
			}
		}catch(InterruptedException e)
		{
			System.out.println("Interrupted");
		}
		System.out.println("Exiting Child Thread");
	}
}

class DemoInheritThread{
	public static void main(String [] args)
	{
		new NewThread("Child");
		
		try{
			for(int i = 10;i>=0;i--)
			{
				System.out.println("Main Thread "+i);
				Thread.sleep(400);
			}
		}catch(InterruptedException e)
		{
			System.out.println("MAin Interrupt");
		}
	}
}
