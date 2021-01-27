/*package whatever //do not write package name here */

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	// Driver Code 
    public static void main(String[] args)  
    { 
        int k = 3; 
        int arr[] = { 3,-1,2,6,4,5,8}; 
        int n = arr.length; 
        kSort(arr, n, k); 
        System.out.println("Following is sorted array"); 
        printArray(arr, n); 
    } 
    
    public static void printArray(int[] arr, int n){
        for(int i=0;i<arr.length;i++){
            System.out.println(arr[i] + "\n"); 
        }
    }
    
    public static void kSort(int[] arr, int n, int k){
        PriorityQueue<Integer> q = new PriorityQueue();
        
        for(int i=0; i<=k;i++){
            q.offer(arr[i]);
        }
        
        int x = 0;
        
        for(int i=k+1; i<arr.length; i++){
            arr[x] = q.poll();
            q.offer(arr[i]);
            x++;
        }
        
        while(!q.isEmpty()){
            arr[x] = q.poll();
            x++;
        }
    }
}
