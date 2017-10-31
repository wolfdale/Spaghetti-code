import java.util.*;
import java.lang.*;
import java.io.*;
class QueueStack{
	 Queue<Integer> q1 = new LinkedList<Integer>();
	 Queue<Integer> q2 = new LinkedList<Integer>();
	private int size = 0;
	
	void push(int x){
		size++;
		q2.add(x);
		while(!q1.isEmpty()){
			q2.add(q1.peek());
			q1.remove();
		}
		 Queue<Integer> temp = q1;
		q1 = q2;
		q2 = temp;
	}
	
	void pop(){
		if(q1.isEmpty()){
			return ;
		}
		q1.remove();
		size--;
	}
	int getsize(){
		return size;
	}
	
	int top(){
		if(q1.isEmpty()){
			return -1;
		}
		return q1.peek();
	}
	
}
class runner{
	public static void main(String[] arg){
		QueueStack qt = new QueueStack();
		qt.push(5);
		qt.push(6);
		qt.push(7);
		qt.push(8);
		System.out.println(qt.top());
		qt.pop();
		System.out.println(qt.top());
		
	}
}
