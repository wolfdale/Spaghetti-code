import java.util.*;
import java.lang.*;
import java.io.*;
class Runner implements Runnable{
	public void run(){
		System.out.println("In Thread");
		try{Thread.sleep(10000);}
		catch(InterruptedException e){}
		System.out.println("Exiting");
	}
	
	public static void main(String[] args){
			Runner r1 = new Runner();
			Thread t1 = new Thread(r1);
			t1.start();
			System.out.println("Main Exit");
	}
}
