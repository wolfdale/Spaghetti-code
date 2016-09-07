import java.util.*;
import java.lang.*;
import java.io.*;

class NestedClass
{
	int x = 100;
	void display(){
		Inner obj = new Inner();
		obj.show();
	}
	class Inner
	{
		void show()
		{
			System.out.println(x);
		}
	}
}

class DemoNestedClass
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		NestedClass o = new NestedClass();
		o.display();
		
	}
}
