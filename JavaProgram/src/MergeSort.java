
public class MergeSort {

	void mergeSort(int arr[], int low, int high)
	{
		if(low<high)
		{
			int mid = (low+high)/2;
			mergeSort(arr, low, mid);
			mergeSort(arr, mid+1, high);
			merge(arr, low, mid, high);
			
		}
	
	}
	
	void merge(int arr[], int low, int mid,int high)
	{
		int i;
		int n1 = mid-low+1; 
		int n2 = high-mid; 
		int[] left = new int[n1+1];
		int[] right = new int[n2+1];
		
		for(i=0; i<n1; i++)
		{
			left[i] = arr[low+i];
		}
		
		for(i=0;i<n2;i++)
		{
			right[i] = arr[mid+i+1];
		}
		int x=0;
		int y=0;
		
		for(int k=low;k<high;k++)
		{
			if(left[x]<=right[y])
			{
				arr[k]=left[x];
				x++;
			}
			else
			{
				arr[k]=right[y];
				y++;
			}
		}
		
		
		
	}

	public static void main(String[] args) {
		int[] arr = {8,3,2,4,6,9,1,2,5};
		MergeSort mergeSort = new MergeSort();
		mergeSort.mergeSort(arr, 0, arr.length-1);
		
		for(int i=0;i<arr.length-1;i++)
		{
			System.out.println(arr[i]);
		}

	}

}
