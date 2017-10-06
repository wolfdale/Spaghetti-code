#include <stdio.h>

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l+(r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
 
        merge(arr, l, m, r);
    }
}

void merge(int a[], int l, int m, int h){
	int n1 = m-l;
	int n2 = h-m+1;
	int l[n1],r[n2];
	
	for(int i=0;i<n1;i++){
		l[n1]=a[i+l];
	}
	
	for(int i=0;i<n2;i++){
		l[n2]=a[i+m+1];
	}
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
 
	
	
	
}


int main(void) {
	// your code goes here
	return 0;
}
