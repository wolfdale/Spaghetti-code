//Here a Exception class is a Super class and ArithmeticException is a Sub classs
//Now the exception is caugth by superclass and the code of subclass will never execute
//This is An error in java

class SuperSubCatchDemo {
 public static void main(String args[]) {
 	try {
 		int a = 0;
 		int b = 42 / a;
 	}
 	catch(Exception e) {
 		System.out.println("Generic Exception catch.");
 	}
 	/* This catch is never reached because
 	ArithmeticException is a subclass of Exception. */
 	catch(ArithmeticException e) { // ERROR – unreachable
 		System.out.println("This is never reached.");
 		}
 	}
}
