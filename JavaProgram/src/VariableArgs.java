import java.util.*;
import java.lang.*;
import java.io.*;

class VariableArgs
{
	static void VarArg(int ... x)
	{
		System.out.println("Numbers of Args: " + x.length);
		for(int i:x)
		{
			System.out.println(i);
		}
	}
	public static void main (String[] args) throws java.lang.Exception
	{
		VarArg(5,6,7);
		VarArg(5,6,7,8,9);
		VarArg(5,6,7,1,1,1,1);
	}
}
