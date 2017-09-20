class TestClass{
   public static void main(String args[ ] ){
      A o1 = new C( );
      B o2 = (B) o1;
      System.out.println(o1.m1( ) );
      System.out.println(o2.i );
   }
}
class A { int i = 10;  int m1( ) { return i; } }
class B extends A { int i = 20;  int m1() { return i; } }
class C extends B { int i = 30;  int m1() { return i; } }
