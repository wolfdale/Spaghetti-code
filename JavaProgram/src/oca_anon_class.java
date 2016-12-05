
import java.util.*;
import java.lang.*;
import java.io.*;

abstract class demo{
	abstract void print();
}

class anon{
	public static void main(String[] args){
		//Anon Class doesnt have Name.
		demo d1 = new demo(){
			void print(){
				System.out.println("Anon");
			}
		};
		d1.print();		
		
	}
}
