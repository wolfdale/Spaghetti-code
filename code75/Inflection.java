/**
 * Find the inflection point in sorted rotated array
 */
class Inflection { 
    public static void main(String[] args) {
        int[] array = new int[]{85,86,87,88,89,90,1,2,3,4,5,6,7,8,9,10};
        System.out.print("Rotated at index " + findPivot(array, 0, 15));
    }
   

    static int findPivot(int arr[], int low, int high) 
    { 
        if (high < low) return -1; 
        if (high == low) return low; 
  
        int mid = (low + high)/2; 
        if (mid < high && arr[mid] > arr[mid + 1]) 
            return mid; 
      
        if (mid > low && arr[mid] < arr[mid - 1]) 
            return (mid-1); 
      
        if (arr[low] >= arr[mid]) 
            return findPivot(arr, low, mid-1); 
      
        return findPivot(arr, mid + 1, high); 
    } 

 
}
