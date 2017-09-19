import java.util.*;
class IterateOverArrayList{
	public static void main(String[] args){
		ArrayList<String> al = new ArrayList<String>();
		al.add("Chase Passion");
		al.add("At any cost");
		Iterator ir = al.iterator();
		while(ir.hasNext()){
			System.out.println(ir.next());
		}
	}
}
