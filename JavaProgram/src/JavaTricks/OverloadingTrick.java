//According to java specs, in case of overloading, compiler picks the most specific function.
//Obviously String class is more specific that Object class, hence it will print “String impl”.

class OverloadingTrick {
	public static void main(String[] args) {
		method(null);
	}
	public static void method(Object o) {
		System.out.println("Object impl");
	}
	public static void method(String s) {
		System.out.println("String impl");
	}
}
