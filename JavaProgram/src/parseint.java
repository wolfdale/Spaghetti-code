import java.io.*;

class parseint{
	public static void main(String [] args){
		//Create a buffer reader
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String str;
		try{
		str = br.readLine();
		int i = Integer.parseInt(str);
		i = i + 9;//INterger addition
		System.out.println(i);	
		}
		catch(Exception e)
		{
		}
	}
}
