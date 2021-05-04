class Solution
{
    public static ArrayList <ArrayList <Integer>> binTreeSortedLevels (int arr[], int n)
    {
        // Do level order traversal
        // At every level 
        //    1) put elements in heap
        //    2) Poll these elements to get results
        int level = 0;
        Queue<int []> q = new LinkedList<int[]>();
        ArrayList <ArrayList <Integer>> result = new ArrayList<ArrayList <Integer>>();
        PriorityQueue<Integer> heap = new PriorityQueue<Integer>();
        int[] slot = new int[2];
        slot[0] = arr[0];
        slot[1] = 0;
        q.offer(slot);
        
        while(!q.isEmpty()) {
            int size = q.size();
            
            for(int i=0; i<size; i++) {
                int[] temp = q.poll();
                
                int left = 2*temp[1]+1;
                int right = 2*temp[1] + 2;
                if(left < n){
                    int[] slotLeft = new int[2];
                    slotLeft[0] = arr[left];
                    slotLeft[1] = left;
                    q.offer(slotLeft);
                    
                }
                if(right < n) {
                    int[] slotRight = new int[2];
                    slotRight[0] = arr[right];
                    slotRight[1] = right;
                    q.offer(slotRight);
                }
                
                heap.add(temp[0]);
            }
            
            ArrayList <Integer> array = new ArrayList<Integer>();
            while(!heap.isEmpty()) {
                array.add(heap.poll());
            }
            result.add(array);
            
        }
        
        return result;
    }
}
