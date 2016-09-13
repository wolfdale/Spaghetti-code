// Throws Demo
//it allows you to specify what type of exception a method can throw
class ThrowsDemo {
 static void throwOne() throws IllegalAccessException,ArithmeticException {
 		System.out.println("Inside throwOne.");
 		throw new IllegalAccessException("demo");
 	}
 public static void main(String args[]) {
 	try {
 		throwOne();
 	} catch (IllegalAccessException e) {
 			System.out.println("Caught " + e);
 		}
 	}
}
