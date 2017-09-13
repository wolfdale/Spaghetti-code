class TestClass{
   public static void main(String[] args){
      A a = new A();
      B b = new B();
      System.out.println(a instanceof T1);
      System.out.println(a instanceof T2);
      System.out.println(b instanceof T1);
      System.out.println(b instanceof T1);
      System.out.println(a instanceof B);
   }
}
class A implements T1, T2{}
class B extends A implements T1{}
interface T1 { }
interface T2 { }
