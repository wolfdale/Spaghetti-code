enum days{
	Monday,Tuesday,Wednesday,Thrusday,Friday,Saturday,Sunday
}

class DemoEnum2{
	
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
		
		//Enum Buit in fuctions

		//Values()
		days all_days[] = days.values();
		System.out.println("All Values");
		for(days di: all_days)
		{
			System.out.println(di);
		}
		
		//ValueOf()
		days d2;
		d2 = days.valueOf("Saturday");
		System.out.println("d2 contains " +d2);
	}
	
}
