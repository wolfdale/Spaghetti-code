//Byte stream
import java.io.*;
class JavaFileIOLineByLine{
	
	public static void main(String[] args){
		try{
			BufferedReader br =new BufferedReader(new FileReader("Input.txt"));
			String c;
			while((c = br.readLine())!=null){
				System.out.println(c);
			}
		}catch(Exception e){}
	}
}
