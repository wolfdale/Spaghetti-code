enum days{
	Monday,Tueday,Wednesdy,Thrusday,Friday,Saturday
}

class DemoEnum4{
	public static void main(String [] args)
	{
		days d1,d2,d3;
		//Geting ordinal values
		for (days x : days.values())
		{
			System.out.println("Value "+x+" "+x.ordinal());
		}
		d2 = days.Monday;
		d3 = days.Monday;
		//Comapre to check comparision on ordinal values
		if(d2.compareTo(d3) == 0){
		System.out.println("Equals");
		}
		
		
		
		
		
		
	}	
}
