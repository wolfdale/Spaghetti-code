//Complexity n^2
class NextGreater
{
	public static void main (String[] args) throws java.lang.Exception
	{
		int[] arr = new int[]{1,64,3,5,88,7,8,21};
		for(int i =0;i<arr.length;i++){
			int next = -1;
			for(int j=i+1;j<arr.length;j++){
				if(arr[j]>arr[i]){
					next = arr[j];
					break;
				}
			}
			System.out.println("Next Greater element of "+arr[i]+ "is" + next);
		}
		
	}
}
