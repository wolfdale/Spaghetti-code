/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

class CustomStack{
	Stack<Integer> main = new Stack<Integer>();
	Stack<Integer> aux = new Stack<Integer>();
	
	void push_data(int key){
		main.push(key);
		if(main.size() == 1){
			aux.push(key);
		}
		if(key>aux.peek()){
			aux.push(key);
		}
		else{
			aux.push(aux.peek());
		}
		
	}
	void pop_data(){
		main.pop();
		aux.pop();
		
	}
	int getmax(){
		return aux.peek();
	}
}

class runner{
	public static void main(String[] args){
		CustomStack s=new CustomStack();
		s.push_data(50);
		System.out.println("Max Now: "+s.getmax());
		s.push_data(60);
		s.push_data(10);
		s.push_data(20);
		s.push_data(30);
		System.out.println("Max Now: "+s.getmax());
		s.push_data(70);
		System.out.println("Max Now: "+s.getmax());
	}
}
