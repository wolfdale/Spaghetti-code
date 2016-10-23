class elapsed{
	public static void main(String [] args){
		System.out.println("Timimg for loop for execution");
		long s,e;
		s = System.currentTimeMillis();
		for(long i = 0;i<1000000000;i++){
		}
		e = System.currentTimeMillis();
		
		System.out.println("Elapsed Time:"+(e-s));
	
	}
}


