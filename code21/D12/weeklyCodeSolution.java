//merge sorted array
class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int final_end = nums1.length - 1;
        int l1 = m-1;
        int l2 = n-1;
        
        while(l1>=0 && l2>=0) {
            
            if(nums1[l1] < nums2[l2]){
                nums1[final_end] = nums2[l2];
                l2--;
                final_end--;
            }else {
                nums1[final_end] = nums1[l1];
                nums1[l1] = 0;
                l1--;
                final_end--;
            }
        }
        
        while(l1>=0) {
            nums1[final_end] = nums1[l1];
            final_end--;
            l1--;
        }
        while(l2>=0) {
            nums1[final_end] = nums2[l2];
            final_end--;
            l2--;
        }
        
    }
}

