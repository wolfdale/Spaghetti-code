//Advantages of buffered reader - >
//synchronous
//Larger buffer area to read large inputs
//bit faster than scanner class

import java.io.*;
class BufferReaderDemo{
	public static void main(String[] args)
	{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter integer");
		try{  
			 int n = Integer.parseInt(br.readLine());
		 } catch (IOException e) {e.printStackTrace();}
	}
}
