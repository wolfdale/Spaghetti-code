class X {
String str = "default";
X(String s) { str = s;}
void print () { System.out.println(str);
System.out.println("Result: " + 2 + 3 + 5);
System.out.println("Result: " + 2 + 3 * 5);}
public static void main(String[] args)
{ new X("hello").print();
}
}


