class FindCubes{
	//a^3 + b^3 = N ==> find Number of pairs
	
	public static int countPair(int n){
		int count = 0;
		for(int i = 1; i<=Math.cbrt(n); i++){
			
			int cb = i*i*i;
			
			int diff = n - cb;
			
			// Check if diff is also a perfect cube.
			
			int diffcb = (int)Math.cbrt(diff);
			
			if(diffcb*diffcb*diffcb == diff){
				count++;
			}
			
		}
		return count;
	}
	public static void main(String[] args){
		for(int i=0;i<=10;i++){
			System.out.println("Equation " + i + "=> " + countPair(i));
		}
	}
		
		
}
