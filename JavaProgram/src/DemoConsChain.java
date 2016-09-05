/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

class ChainCons
{
	ChainCons()
	{
		System.out.println("Default Constructor");
	}
	ChainCons(String str)
	{
		this();
		System.out.println("Constructor with One Arg");
	}
	ChainCons(String str,int i)
	{
		this("TWO PARAMS");
		System.out.println("Constructor with Two Args");
	}
	ChainCons(int x,int y,int z)
	{
		this("Three Params",5);
		System.out.println("Constructor with Three Args");
	}
}
/* Name of the class has to be "Main" only if the class is public. */
class DemoConsChain
{
	public static void main (String[] args) throws java.lang.Exception
	{
		ChainCons b1 = new ChainCons(5,5,5);
		// your code goes here
	}
}
