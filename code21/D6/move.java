class Solution {
    public void moveZeroes(int[] nums) {
        int count = 0;
        if(nums.length == 1 || nums.length==0) return;
        
        int last_zero = 0;
        
        for(int i=0;i<nums.length;i++){
            if(nums[i] !=0){
                nums[last_zero] = nums[i];
                last_zero++;
                
            }
        }
        
        for(int i=last_zero;i<nums.length;i++){
            nums[i] = 0;
            
        }
        
    }
}
