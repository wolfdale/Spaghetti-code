import java.io.*;
class JavaFileIO{
	
	public static void main(String[] args){
		FileReader in = null;
		FileWriter out = null;
		
		try{
			in = new FileReader("Input.txt");
			out = new FileWriter("Output.txt");
			int c;
			while((c = in.read())!=-1){
				out.write(c);
			}
		}
		catch(Exception e){}
		finally{
			if(in != null){
				try{
					in.close();
				}
				catch(Exception e){
				}
			}
			if(out != null){
				try{out.close();}
				catch(Exception e){}
			}
		}
	}
}
