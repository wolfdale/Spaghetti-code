class Solution {
    public int[][] kClosest(int[][] points, int K) {
        // Idea
        // Maintain a k sized min heap.
        int[][] result = new int[K][2];
        PriorityQueue<int[]> heap = new PriorityQueue<int[]>((a, b) -> (b[0]*b[0]+b[1]*b[1])-(a[0]*a[0]+a[1]*a[1])); 
        
        
        for(int[] point : points){
            heap.add(point);
            //System.out.println(" " +pt[0] + " " + pt[1]);
            if(heap.size() > K){
                heap.poll();
            }            
        }
        
        for(int i=0;i<K;i++) {
            int [] point = heap.poll();
            result[i] = point;
        }
        
        return result;
    }
}
