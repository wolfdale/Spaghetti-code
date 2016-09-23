import java.io.*;
class BRReadString {
 public static void main(String args[]) throws IOException
 {
 String c;
 BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
 do {
 c = br.readLine();
 System.out.println(c);
 } while(!c.equals("Stop"));
 }
}
