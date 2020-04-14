/**
 * This is optimized version of maximum sum of a subarray of size k
 * by using a window of size k and sliding it across the array.
 */

class SlideWindow {
    public static void main(String[] args) {
        int[] arr = { 1, 4, 2, 10, 2, 3, 1, 0, 20 };
        int k = 4;
        int n = arr.length;
        
        // Compute sum of 1st window
        int maxSum = 0;

        for (int i = 0; i<k; i++) {
            maxSum = maxSum + arr[i];
        }
        
        int windowSum = maxSum;
        for (int i = k; i < n; i++)
        {
            windowSum = windowSum + arr[i] - arr[i-k];
            if(windowSum > maxSum) {
                maxSum = windowSum;   
            }
        }
        System.out.println("Max sum " + maxSum);
    }
}
