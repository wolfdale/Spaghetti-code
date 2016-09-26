//Way to read and check inputs like check and read integer inputs only

import java.util.Scanner;
   
   public class ScannerDemo{
           public static void main(String[] args){
   
                   Scanner sr = new Scanner(System.in);
                   double sum = 0 ;
                   int count = 0;
                  while(sr.hasNextInt()){
                          int num = sr.nextInt();
                          sum += num;
                          count++;
                  }
                  System.out.println(sum/count);
         }
  }
