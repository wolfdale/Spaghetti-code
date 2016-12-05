import java.util.*;
import java.lang.*;
import java.io.*;
interface demo{
	void print();
}
class anon_interface{
	public static void main(String[] args){
		
		demo d1 = new demo(){
			public void print(){ 
				System.out.print("Anon class");
			}
		};
		d1.print();
	}
}
