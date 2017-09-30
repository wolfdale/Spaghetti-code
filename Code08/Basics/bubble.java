class FindPivot{
	static void bubblesort(int a[],int x,int n){
		for(int i = 0;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				if(a[i]>a[j]){
					int temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
		}
		for(int i=0;i<=n;i++){
			System.out.println(a[i]);
		}
	}
	
	public static void main(String[] args){
		int[] a = new int[]{7,8,9,10,1,2,3,4,5,6};
		bubblesort(a,0,9);
	
	}
 
}
