import java.util.*;
import java.lang.*;
import java.io.*;
class HM2
{
	public static void main (String[] args) throws java.lang.Exception
	{
		HashMap<String,String> hm = new HashMap<String,String>();
		hm.put("Jhon","Doe");
		hm.put("Ruth","Caller");
		Set<Map.Entry<String,String>> shm = hm.entrySet();
		for(Map.Entry<String,String> ex : shm){
			System.out.println(ex.getValue());
			System.out.println(ex.getKey());
			
		}
		//VALUE for key
		String val = hm.get("Jhon");
		System.out.println(val);
	}
}
