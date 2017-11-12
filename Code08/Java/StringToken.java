import java.util.*;  
  
class Test {  
   public static void main(String[] args) {  
       StringTokenizer st = new StringTokenizer("my,name,is#khan");  
        
      // printing next token  
      System.out.println("Next token is : " + st.nextToken(","));
      System.out.println("Next token is : " + st.nextToken("#"));  
   }      
}  
