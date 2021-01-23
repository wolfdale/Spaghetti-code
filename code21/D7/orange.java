class Solution {
    public int orangesRotting(int[][] grid) {
        
        Queue<int[]> q = new LinkedList();
        boolean flag = false;
        int count_one=0;
        for(int i=0; i<grid.length; i++){
            for(int j=0; j<grid[0].length;j++){
                if(grid[i][j] == 2){
                    q.offer(new int[]{i,j});
                    flag = true;
                } 
                if(grid[i][j] == 1){
                    count_one++;
                }
            }
        }
        
        if(!flag && count_one==0) {
            return 0;
        }
        int count = 0;        
        
        while(!q.isEmpty()){
            int size = q.size();
            count++;
            for(int i=0;i<size;i++){
                int[] point = q.poll();
                mark(point, grid, q);
            }
            
        }
        
        for(int i=0; i<grid.length; i++){
            for(int j=0; j<grid[0].length;j++){
                if(grid[i][j] == 1){
                    return -1;
                }
            }
        }
        return count-1;
    }
    
    public void mark(int[] point, int[][] grid, Queue<int[]> q){
        int i = point[0];
        int j = point[1];
        
        
        
        int[][] dirs = new int[][] {{1,0}, {0,1}, {0,-1}, {-1,0}};
        
        for(int[] dir : dirs){
            int x_new = dir[0]+i;
            int y_new = dir[1]+j;
            if(x_new>=0 && y_new>=0 && x_new<grid.length && y_new<grid[0].length && grid[x_new][y_new] != 0 && grid[x_new][y_new] != 2) {
            grid[x_new][y_new] = 2;
                q.offer(new int[] {x_new, y_new});
            }
            
        }
        
    }
}
