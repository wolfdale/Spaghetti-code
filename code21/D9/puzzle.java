class Solution {
    public void solve(char[][] board) {
        if (board.length == 0 || board[0].length == 0)
		    return;
	    if (board.length < 2 || board[0].length < 2)
		    return;

        int m = board.length;
        int n = board[0].length;
        
        // 1st & last col
        for(int i=0; i<m; i++) {
            if(board[i][0] == 'O') {
                capture(board,i, 0);
            }
            
            if(board[i][n-1] == 'O') {
                capture(board, i, n-1);
            }
        }
        
        // 1st row & last row
        for(int j=0; j<n; j++) {
            if(board[0][j] == 'O') {
                capture(board, 0, j);
            }
            
            if(board[m-1][j] == 'O') {
                capture(board, m-1, j);
            }
        }
        
        // Process
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++) {
                if(board[i][j] == 'O') {
                    board[i][j] = 'X';
                }
                if(board[i][j] == '*') {
                    board[i][j] = 'O';
                }
            }
        }
    }
    
    
    public void capture(char[][] board, int i, int j){
        
        if(i<0 || 
           j<0 || 
           i>board.length-1 || 
           j>board[0].length-1 || 
           board[i][j] != 'O'){
            return;
        }
        
        board[i][j] = '*';
        
        capture(board, i+1, j);
        capture(board, i-1, j);
        capture(board, i, j+1);
        capture(board, i, j-1);
        
    }
}   
