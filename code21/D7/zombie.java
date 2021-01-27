import java.util.LinkedList;
import java.util.Queue;

class Island {

    public static void main(String[] args) {
        int[][] island = new int[][]{
                {0, 1, 1, 0, 1},
                {0, 1, 0, 1, 0},
                {0, 0, 0, 0, 1},
                {1, 1, 0, 0, 0}
        };
        int result = Island.zombie(island);
        System.out.println(String.format("%s (expect 2)", result));
    }

    public static int zombie(int[][] grid){
        int total_one = grid.length * grid[0].length;
        Queue<int[]> q = new LinkedList<>();
        int count = 0;

        for(int i=0; i<grid.length; i++) {
            for(int j=0; j<grid[0].length; j++) {
                if(grid[i][j]==1){
                    count++;
                    q.offer(new int[]{i, j});
                }
            }
        }

        int[][] dirs = new int[][] {{1,0}, {0, 1}, {-1, 0}, {0, -1}};
        int res = 0;
        // BFS
        while(!q.isEmpty()) {
            int size = q.size();

            if(total_one == count) {
                return res;
            }

            for(int i=0; i<size; i++) {
                int[] point = q.poll();

                for(int[] dir: dirs) {
                    int new_i = point[0] + dir[0];
                    int new_j = point[1] + dir[1];
                    if(new_i >=0 && new_j >=0 && new_i < grid.length && new_j < grid[0].length && grid[new_i][new_j] == 0) {
                        grid[new_i][new_j] = 1;
                        q.offer(new int[]{new_i, new_j});
                        count++;
                    }
                }

            }

            res++;
        }
        return -1;
    }
}

