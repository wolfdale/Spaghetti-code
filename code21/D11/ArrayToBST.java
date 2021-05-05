/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public TreeNode sortedArrayToBST(int[] nums) {
        return builder(nums, 0, nums.length-1);
    }
    
    public TreeNode builder(int[] nums, int start, int end) {
        TreeNode tree = null;
        if(start <= end) {
            int mid = start + (end-start)/2;
            
            tree = new TreeNode(nums[mid]);
            
            tree.left = builder(nums, start, mid-1);
            tree.right = builder(nums, mid+1, end);
        }
        
        
        return tree;
    }
}
