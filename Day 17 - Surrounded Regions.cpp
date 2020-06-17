class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int row = board.size();
        if(row <= 2)
            return;
        int col = board[0].size();
        for(int i = 0; i < row; i ++){
            if(board[i][0] == 'O')
                populate(board, i, 0);
            if(board[i][col-1] == 'O')
                populate(board, i, col-1);
        }
        for(int i = 0; i < col; i ++){
            if(board[0][i] == 'O')
                populate(board, 0, i);
            if(board[row-1][i] == 'O')
                populate(board, row-1, i);
        }
        for(int i = 0; i < row; i ++){
            for(int j = 0; j < col; j ++){
                if(board[i][j] == '*')
                    board[i][j] = 'O';
                else
                    board[i][j] = 'X';
            }
        }
    }
    void populate(vector<vector<char>>& board, int x, int y){
        board[x][y] = '*';
        if(x > 1 && board[x-1][y] == 'O')
            populate(board, x-1, y);
        if(x < board.size()-1 && board[x+1][y] == 'O')
            populate(board, x+1, y);
        if(y > 1 && board[x][y-1] == 'O')
            populate(board, x, y-1);
        if(y < board[0].size()-1 && board[x][y+1] == 'O')
            populate(board, x, y+1);
    }
};