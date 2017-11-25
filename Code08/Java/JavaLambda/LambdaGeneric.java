interface GenericInterface<T>{
	T impl(T t);
}

class runner{
	public static void main(String[] agrg){
		GenericInterface<String> rev = (str) -> {
			String result="";
			for(int i=str.length()-1;i>=0;i--){
				result = result + str.charAt(i);
			}
			return result;
		};
		
		System.out.println(rev.impl("This"));
		
		GenericInterface<Integer> fact = (n) -> {
			int res = 1;
			for(int i=1;i<=n;i++){
				res= res*i;
			}
			return res;
		};
		
		System.out.println(fact.impl(5));
	}
}
