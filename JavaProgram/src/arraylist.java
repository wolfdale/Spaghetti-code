import java.util.*;
class runner{
	public static void main(String[] args){
		ArrayList<String> al = new ArrayList<String>();
		al.add("A");
		al.add("B");
		al.add("C");
		al.add("D");
		al.add("E");
		al.add("F");
		al.add("G");
		al.add("H");
		System.out.println("Size of Array List "+al.size());
		System.out.println(al);
		al.add(1,"a");		
		System.out.println("Size of Array List "+al.size());
		System.out.println(al);


	}
}	
