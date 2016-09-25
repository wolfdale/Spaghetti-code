  1 import java.util.Scanner;
  2 
  3 public class TravelCosts{
  4         public static void main(String [] args){
  5                 double distance,time;
  6                 String str;
  7                 Scanner in = new Scanner(System.in);
  8                 System.out.println("Enter Distance: ");
  9                 distance = in.nextDouble();
 10 
 11                 System.out.println("Enter Time: ");
 12                 time = in.nextDouble();
 13 
 14                 System.out.println("Speed: "+(distance/time));;
 15                 System.out.println("Enter the String :");
 16                 str = in.next();
 17                 System.out.println("The entered String is : "+str);
 18 
 19         }
 20 
 21 }
