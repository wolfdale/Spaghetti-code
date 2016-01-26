

public class Nqueen {

	public Boolean isSafe(int[][] maze,int row,int col){
		for(int j = col;j >= 0;j--){
			if(maze[row][j]==1){
				return false;
			}
		}
		for(int i = row;i>=0;i--){
			if(maze[i][col]==1){
				return false;
			}
		}
		for(int i = row,j = col;i >= 0 && j >= 0;i--,j--){
			if(maze[i][j]==1){
				return false;
			}
		}
		return true;
	}
	public Boolean SolutiontoNqueens(int[][] maze,int row){
		
		if(maze.length <= row){
			return true;
		}
		for(int i = 0; i < maze.length;i++){
			if(isSafe(maze,row,i)){
				maze[row][i] = 1;
				if(SolutiontoNqueens(maze, row+1) == true){
					return true;
				}
				maze[row][i] = 0; 
			}
		}
		return false;
	}
	public void printSolution(int[][] maze){
		for(int i = 0; i < maze.length;i++){
			System.out.println();
			for(int j = 0; j < maze.length;j++){
				if(maze[i][j] == 1){
					System.out.print(" "+"Q");
				}
				else{
					System.out.print(" "+maze[i][j]);
				}
			}
		}
	}
	public static void main(String args[]){
		int[][] maze = {{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};
		Nqueen nqueen = new Nqueen();
		nqueen.SolutiontoNqueens(maze,0);
		nqueen.printSolution(maze);
	}
}
