// Cool working of remove method of Arraylist (unboxing and boxing effect)
import java.util.*;
import java.lang.*;
import java.io.*;

class ListWorking{
	public static void main(String[] args){
		List<Integer> l1 = new ArrayList<Integer>();
		l1.add(1);
		l1.add(2);
		l1.add(3);
		l1.add(4);
		l1.add(5);
		l1.add(6);
		System.out.println(l1);
		//it will remove value at index = 1
		l1.remove(1);
		System.out.println(l1);
		//it will remove element = 6
		l1.remove(new Integer(6));
		System.out.println(l1);

	}
}
