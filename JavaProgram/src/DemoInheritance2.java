/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;
class SuperClass{
	int i;
	int j;
	private int m;
	void displayij()
	{
		System.out.println("i and J "+i+" "+j);
	}
	void displaym()
	{
		System.out.println("Value of m : " + m);
	}
}

class SubClass extends SuperClass{
	int k;
	void displayk(){
		System.out.println("Value of k"+ k);
		//Private members cant be inherited
	}
	
}
	
	
	
/* Name of the class has to be "Main" only if the class is public. */
class DemoInheritance2
{
	public static void main (String[] args) throws java.lang.Exception
	{
		SuperClass super_obj = new SuperClass();
		super_obj.i = 100;
		super_obj.j = 200;
		super_obj.displayij();
		SubClass sub_obj = new SubClass();
		sub_obj.i = 500;
		sub_obj.j = 600;
		sub_obj.k = 700;
		sub_obj.displayij();
		sub_obj.displayk();
		
	}
}
