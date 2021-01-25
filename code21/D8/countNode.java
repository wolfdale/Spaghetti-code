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
        
        Queue<TreeNode> q = new LinkedList();
        q.offer(root);
        int result = 0;

        while(!q.isEmpty()){
            int s = q.size();
            result+=s;
            
            for(int i=0; i<s; i++){
                TreeNode x = q.poll();
                if(x.left != null){
                    q.offer(x.left);
                }
                if(x.right != null) {
                    q.offer(x.right);
                }
            }
                        
        }
        
        return result;
        
    }
}
