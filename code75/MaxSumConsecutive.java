/**
 * This is a brute force example for finding maximum sum of 
 * a subarray of size k - Complexity O(k*n) 
 */

class MaxSumConsecutive {
    public static void main(String[] args) {
        int [] arr = new int[] { 1, 4, 2, 10, 2, 3, 1, 0, 20 };
        int k = 4;
        int maxSum = -1000;
        int localSum = -11111;
        // 8 is length of array
        for (int i = 0;i<9-k+1; i++) {
            localSum = 0;
            for (int j = 0; j<k; j++) {
                localSum = arr[i+j] + localSum;
            }
            if (localSum > maxSum) {
                maxSum = localSum;
            }
        }

        System.out.println("Max sum for subarray " + maxSum);
    }

}
