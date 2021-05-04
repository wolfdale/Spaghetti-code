class Solution
{
    //Function to merge k sorted arrays.
    public static ArrayList<Integer> mergeKArrays(int[][] arr,int K) 
    {
        // Write your code here.
        ArrayList<Integer> result = new ArrayList<Integer>();
        PriorityQueue<int[]> heap = new PriorityQueue<int[]>((a,b) -> a[0] - b[0]);
        int k = K;
        
        for(int i=0; i<k; i++) {
            // value - array number - index
            int[] ar = new int[]{arr[i][0], i, 0};
            heap.offer(ar);
        }
        
        while(!heap.isEmpty()) {
            
            int[] temp = heap.poll();
            
            result.add(temp[0]);
            
            if(temp[2]+1 < arr[temp[1]].length) {
                int new_index = temp[2] + 1;
                int arr_number = temp[1];
                int[] slot = new int[] {arr[arr_number][new_index], arr_number, new_index};
                heap.offer(slot);
            }
            
            
        }
        
        return result;
        
    }
}
