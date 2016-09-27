//LInked List
import java.util.*;

class ListDemo{
	public static void main(String[] args){
		
		String[] things = {"a","b","c"};
		List<String> list1 = new LinkedList<String>();
		for(String x : things)
		{
			list1.add(x);
		}
		
		String[] things_1 = {"e","f","g"};
		List<String> list2 = new LinkedList<String>();
		for(String x : things_1)
		{
			list2.add(x);
		}

		list1.addAll(list2);
		printer(list1);
		printer(list2);
		list2 = null;
		try{
		printer(list2);
		}
		catch (NullPointerException e)
		{
			System.out.println(e);
		}
		
	}		
	static void printer(List<String> lis)
	{	
		for(String x : lis)
		{
			System.out.println(x);
		}
	}

		
}
