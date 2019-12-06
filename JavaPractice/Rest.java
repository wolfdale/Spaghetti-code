/*Over engineered solution leetcode - https://leetcode.com/problems/minimum-index-sum-of-two-lists/submissions/*/

class Rest {
    public String[] findRestaurant(String[] list1, String[] list2) {
        HashMap<String, Integer> one = new HashMap<String, Integer>();
        HashMap<String, Integer> two = new HashMap<String, Integer>();
        
        for(int i = 0; i<list1.length; i++){
            one.put(list1[i], i);
        }
        
        for(int i = 0; i<list2.length; i++){
            two.put(list2[i], i);
        }
        
        //compare logic
        int min = 9999999;
        String minS = null;
        
        for (Map.Entry<String, Integer> entry : one.entrySet()) {
            if(two.get(entry.getKey()) != null){
                
                int sum = entry.getValue() + two.get(entry.getKey());
                
                if(sum < min){
                    minS = entry.getKey();
                    min = sum;
                }
            }
        
        }
        
        if(minS != null){
            return new String[] {minS};
        }
        
        return null;
        
    }
}
