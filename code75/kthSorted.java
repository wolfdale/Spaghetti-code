class kthSorted {
    

    static int kth(int [] a, int [] b, int m, int n, int k) {
        int sort[] = new int[m+n];
        
        int i=0;
        int j=0;
        int z=0;
        while (i<m && j<n) {
            if(a[i] < b[j]) {
                sort[z++] = a[i];
                i++;
            } else {
                sort[z++] = b[j];
                j++;
            }
        }
        while(i<m) {
            sort[z++] = a[i];
            i++;
        }
        while(j<n) {
            sort[z++] = b[j];
            j++;
        }
        return sort[k-1];

    }


    public static void main (String[] args)  
    { 
        int arr1[] = {2, 3, 6, 7, 9}; 
        int arr2[] = {1, 4, 8, 10}; 
        int k = 5; 
        System.out.print(kth(arr1, arr2, 5, 4, k)); 
    } 

}
