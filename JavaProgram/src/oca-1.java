import java.util.*;
import java.lang.*;
import java.io.*;
public class Main {
  public static StringBuilder work(StringBuilder a, StringBuilder b) {
    a = new StringBuilder("BBB");
    b.append("AAA");
    return a;
  }
 
  public static void main(String[] args) {
    StringBuilder s1 = new StringBuilder("StringBuilder1");
    StringBuilder s2 = new StringBuilder("StringBuilder2");
    StringBuilder s3 = work(s1, s2);
    System.out.println("s1 = " + s1);
    System.out.println("s2 = " + s2);
    System.out.println("s3 = " + s3);
  }
}
