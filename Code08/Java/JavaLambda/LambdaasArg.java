interface func{
	String funct(String x);
}

class Runner{
	public static String ops(func f, String s ){
		return f.funct(s);
	}
	
	public static void main(String[] arg){
		String s1 = "This is Lambda";
		String res = ops((x)->{
			return x+" Lambda is Cool";},s1);
		System.out.println(res);
	}

}
