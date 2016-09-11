
public class main_handler {
	public static void main(String [] args)
	{
		Inherit obj = new Inherit();
		obj.method_1();
		obj.method_2();
		obj.method_3();
		
		//Interface Variable reference can access only method of its Interface 
		//OBJ2 can't access other method of class Inherit
		A obj2 = new Inherit();
		obj2.method_2();
		obj2.method_1();
		//obj2.method_3();   Illegal
		B obj3 = new Inherit();
		obj3.method_3();
		
		
	}
	
}
