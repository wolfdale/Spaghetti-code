enum days{
	Monday,Tuesday,Wednesday,Thrusday,Friday,Saturday,Sunday
}

class DemoEnum{
	
	public static void main(String [] args)
	{
		
		days d1;
		d1 = days.Monday;
		//This will Print Monday
		System.out.println(d1);
		
		//we can check equality
		if(d1 == days.Monday)
		{
			System.out.println("True");
		}
		
		//Can be used in Switch statements
		switch(d1)
		{
			case Monday:
					System.out.println("This is Monday");
					break;
			case Tuesday:
					System.out.println("This is Tuesday");
					break;
			//and so on..
		}
		
	}
	
}
