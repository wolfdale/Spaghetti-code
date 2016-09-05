/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;
class TestEven{
	int i;
	boolean testeven(int i)
	{
		if(i%2==0){return true;}
		else{return false;}
	}
	

};
/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		//for each loop in java
		int sum =0 ;
		int num[] = {1,2,3,4,5,6,7,8,9};
		for(int i:num){sum = sum + i;}
		System.out.println(num);
		String str="This is my first string";
		System.out.println(str);
		int[] arr = new int[10];
		for(int i = 0;i<arr.length;i++)
		{
			arr[i]=i;
			
		}
		for(int i = 0 ;i<arr.length;i++)
		{
			TestEven b1 = new TestEven();
			System.out.println(b1.testeven(i));
			
		}
		int twod[][] = new int[5][5];
		for(int i = 0;i<5;i++)
		{
			for(int j=0;j<5;j++)
			{
				twod[i][j]=i;
			}
		}
		for(int i = 0;i<5;i++)
		{
			for(int j=0;j<5;j++)
			{
				System.out.print(twod[i][j]);
			}
			System.out.println("\n");
		}
		//automatic promotion
		byte a = 9;
		a=(byte)(a*2);
		// your code goes here
	}
}
