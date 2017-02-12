import java.util.*;
class runner{
	public static void main(String[] args){
		ArrayList<Integer> al = new ArrayList<Integer>();
		al.add(1);
		al.add(2);
		al.add(3);
		al.add(4);
		al.add(5);
		al.add(6);
		al.add(7);
		al.add(8);
		al.add(9);
		al.add(10);
		al.add(11);
		al.add(12);
		al.add(13);
		System.out.println("Size of Array List "+al.size());
		System.out.println(al);
		Integer[] arr = new Integer[al.size()];
		arr = al.toArray(arr);
		int sum = 0;
		for (int i : arr){
			sum = sum+i;
		}
		System.out.println("Sum is "+sum);


	}
}	
