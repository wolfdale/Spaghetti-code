
import java.util.LinkedList;
import java.util.Queue;

public class Island {

    static class Cordinates {
        public int getX() {
            return x;
        }

        public void setX(int x) {
            this.x = x;
        }

        public int getY() {
            return y;
        }

        public void setY(int y) {
            this.y = y;
        }

        int x;
        int y;

        public Cordinates(int x, int y){
            this.x = x;
            this.y = y;
        }
    }

    public static void main(String[] args) {
        char[][] island = new char[][]{
                {'O', 'O', 'O', 'O'},
                {'D', 'O', 'D', 'O'},
                {'O', 'O', 'O', 'O'},
                {'X', 'D', 'D', 'O'}
        };
        int result = Island.treasureIsland(island);
        System.out.println(String.format("%s (expect 5)", result));
    }

    private static int treasureIsland(char[][] island) {
        if(island.length == 0) return 0;
        int steps = 0;
        int[][] visited = new int[island.length][island[0].length];
        // Start from top left
        Queue<Cordinates> q = new LinkedList<>();
        q.offer(new Cordinates(0,0));
        visited[0][0] = 1;
        int [][] dirs = new int[][] {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

        while(!q.isEmpty()) {
            int size = q.size();

            for(int i=0; i<size; i++) {
                Cordinates cor = q.poll();
                int x = cor.getX();
                int y = cor.getY();

                if(island[x][y] == 'X') {
                    return steps;
                }

                for (int[] dir : dirs) {
                    int new_x = x + dir[0];
                    int new_y = y + dir[1];
                    if (new_x >=0
                        && new_y >=0
                        && new_x < island.length
                        && new_y < island[0].length
                        && island[new_x][new_y] != 'D'
                        && visited[new_x][new_y] != 1) {

                        q.offer(new Cordinates(new_x, new_y));
                        visited[new_x][new_y] = 1;
                    }
                }
            }

            steps++;
        }

       return steps;
    }
}

