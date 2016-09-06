//Calling Static Methods in main using Class Name
import java.util.*;
import java.lang.*;
import java.io.*;

class DemoStatic{
	static int a = 5;
	static int b = 6;
	int x = 20;
	static void callme()
	{
		System.out.println("Value of a = "+a);
	}
}
/* Name of the class has to be "Main" only if the class is public. */
class Static
{
	public static void main (String[] args) throws java.lang.Exception
	{
		DemoStatic.callme();
		System.out.println(DemoStatic.b);
		
		
	}
}
