class Solution {
    public List<Integer> rightSideView(TreeNode root) {
        List<Integer> result = new LinkedList<Integer>();
        
        if (root==null) {
            return result;    
        }
        
        Queue<TreeNode> q = new LinkedList();
        q.offer(root);
        
        while(!q.isEmpty()) {
            int size = q.size();
            
            for(int i=0; i<size; i++) {
                
                TreeNode n = q.poll();
                
                if(i==size-1) {
                    result.add(n.val);
                }
                
                if(n.left!= null) {
                    q.offer(n.left);
                }
                
                if(n.right != null) {
                    q.offer(n.right);
                }
            }
        }
        
        return result;
    }
}
