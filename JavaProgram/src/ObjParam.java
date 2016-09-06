/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;
class DemoTest{
	int a,b;
	void setab(int x, int y)
	{
		a=x;
		b=y;
	}
	boolean equal(DemoTest obj)
	{
		if(obj.a==this.a && obj.b==this.b)
		{
			return true;
		}
		else{
			return false;
		}
		
	}
}
/* Name of the class has to be "Main" only if the class is public. */
class ObjParam
{
	public static void main (String[] args) throws java.lang.Exception
	{
		DemoTest obj1 = new DemoTest();
		DemoTest obj2 = new DemoTest();
		DemoTest obj3 = new DemoTest();
		
		obj1.setab(5,6);
		obj2.setab(5,6);
		obj3.setab(9,10);
		System.out.println(obj1.equal(obj2));
		System.out.println(obj1.equal(obj3));
		
		// your code goes here
	}
}
