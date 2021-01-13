class Solution {
    public int[] searchRange(int[] nums, int target) {
        int[] result = new int[2];
        result[0] = getLeft(nums, target);
        result[1] = getRight(nums, target);
        return result;
    }
    
    
    public int getLeft(int[] nums, int target){
        int index = -1;
        int low = 0;
        int high = nums.length-1;
        
        while(low<=high){
            int mid = low + (high-low)/2;
            
            if(nums[mid] >= target){
                high = mid-1;
            }else{
                low = mid+1;
            }
            if(nums[mid] == target){
                index = mid;
            }
        }

        return index;
    }
    
    public int getRight(int[] nums, int target){
        int index = -1;
        int low = 0;
        int high = nums.length-1;
        
        while(low<=high){
            int mid = low + (high-low)/2;
            
            if(nums[mid] <= target){
                low = mid+1;
            }else{
                high = mid-1;
            }
            if(nums[mid] == target){
                index = mid;
            }
        }

        return index;
    }
    
}
