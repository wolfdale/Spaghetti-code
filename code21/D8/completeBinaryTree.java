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
    public int countNodes(TreeNode root) {
        if(root == null) return 0;
        return getCount(root, 0);
        
    }
    
    public int getCount(TreeNode node, int ans){
        if(node==null) return 0;
        int l = getLeft(node.left);
        int r = getRight(node.right);
        
        if(l!=r){
            return getCount(node.left, ans) + 1 + getCount(node.right, ans);
        }
        else {
            return ((int)Math.pow(2, l)) - 1;
        }
    }
    
    public int getLeft(TreeNode node){
        int count = 1;
        
        while(node != null){
            node = node.left;
            count++;
        }
        return count;
    }
    
    
    public int getRight(TreeNode node){
        int count = 1;
        
        while(node != null){
            node = node.right;
            count++;
        }
        
        return count;
    }
}
