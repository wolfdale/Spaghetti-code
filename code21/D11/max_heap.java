class Solution {
    public int maximumScore(int a, int b, int c) {
        PriorityQueue<Integer> heap = new PriorityQueue<Integer>((u,v) -> v-u);
        
        heap.offer(a);
        heap.offer(b);
        heap.offer(c);
        int count = 0;
        
        while(heap.size() > 1) {
            int x = heap.poll()-1;
            int y = heap.poll()-1;
            
            if(x>0) {
                heap.offer(x);
            }
            
            if(y>0) {
                heap.offer(y);
            }
            count++;
        }
        
        return count;
        
    }

