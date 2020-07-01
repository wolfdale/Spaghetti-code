class Rotate 
{ 
		
	static int pivotedBinarySearch(int arr[], int n, int key) 
	{ 
	    int pivot = findPivot(arr, 0, n-1); 
		
	    if (pivot == -1) 
		    return binarySearch(arr, 0, n-1, key); 
		
	    if (arr[pivot] == key) 
		    return pivot; 
	    if (arr[0] <= key) 
		    return binarySearch(arr, 0, pivot-1, key); 
	    return binarySearch(arr, pivot+1, n-1, key); 
	} 
	
	static int findPivot(int arr[], int low, int high) 
	{ 
	    if (high < low) 
			return -1; 
	    if (high == low) 
			return low; 
		
	    int mid = (low + high)/2; 
	    if (mid < high && arr[mid] > arr[mid + 1]) 
		    return mid; 
	    if (mid > low && arr[mid] < arr[mid - 1]) 
		    return (mid-1); 
	    if (arr[low] >= arr[mid]) 
		    return findPivot(arr, low, mid-1); 
	    return findPivot(arr, mid + 1, high); 
	} 
	
	static int binarySearch(int arr[], int low, int high, int key) 
	{ 
	if (high < low) 
		return -1; 
		
	int mid = (low + high)/2; 
	if (key == arr[mid]) 
		return mid; 
	if (key > arr[mid]) 
		return binarySearch(arr, (mid + 1), high, key); 
	return binarySearch(arr, low, (mid -1), key); 
	} 
	
	public static void main(String args[]) 
	{ 
	    int arr1[] = {54, 62, 78, 81, 97, 140, 11, 24, 36}; 
	    int n = arr1.length; 
	    int key = 36; 
	    System.out.println("element: "
					+ pivotedBinarySearch(arr1, n, key)); 
	} 
} 

