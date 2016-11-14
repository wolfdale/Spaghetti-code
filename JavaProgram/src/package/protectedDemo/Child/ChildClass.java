package Child;
import Parent.ParentClass;
public class ChildClass extends ParentClass {
	void showx(){
		System.out.println(x);
	}
	
}
class Intro {
		public static void main(String [] args){
			ChildClass s = new ChildClass();
			s.showx();
		}
}
