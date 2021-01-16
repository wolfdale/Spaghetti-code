class Solution {
    public int[] topKFrequent(int[] nums, int k) {
        int[] result = new int[k];
        if(nums.length == 0) return result;
        
        // Idea -
        // HashMap to hold the frequencies
        // Iterate a hashmap to build max heap
        // pop k elements from heap
        HashMap<Integer, Integer> hm = new HashMap();
        PriorityQueue<Integer> heap = new PriorityQueue<>((a,b) -> hm.get(a) - hm.get(b));
        
        for (int n: nums) {
          hm.put(n, hm.getOrDefault(n, 0) + 1);
        }
        
        
        for(Map.Entry<Integer, Integer> ent : hm.entrySet()){
            heap.add(ent.getKey());
            if (heap.size() > k) heap.poll();  
        }
        
        
        for(int i=0;i<k;i++){
            result[i] = heap.poll();
        }
        
        
        return result;
        
        
        
    }
}
