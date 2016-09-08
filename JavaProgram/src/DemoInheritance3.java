
import java.util.*;
import java.lang.*;
import java.io.*;
class SuperClass{
	int i;
	int j;
	private int m;
	SuperClass(int x,int y){
		i=x;
		j=y;
		m=1;
	}
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
	SubClass(){
		super(4,5);
		k=10;
	}
	void displayk(){
		System.out.println("Value of k"+ k);
		//Private members cant be inherited
	}
	
}
	
	
	
/* Name of the class has to be "Main" only if the class is public. */
class DemoInheritance3
{
	public static void main (String[] args) throws java.lang.Exception
	{
		SuperClass super_obj = new SuperClass(5,5);
		super_obj.displayij();
		super_obj.displaym();
		SubClass sub_obj = new SubClass();
		sub_obj.displayij();
		sub_obj.displayk();
		
	}
}
