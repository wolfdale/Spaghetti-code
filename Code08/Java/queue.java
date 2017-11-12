import java.util.*;
class QueueDemo{
	public static void main(String[] args){
		Queue<Integer> st = new LinkedList<Integer>();
		st.add(1);
		st.add(2);
		st.add(3);
		st.add(4);
		System.out.println(st.peek());
		System.out.println(st.remove());
		System.out.println(st.remove());
		System.out.println(st.peek());
		
	}
}
