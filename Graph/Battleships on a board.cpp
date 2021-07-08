/*Given an m x n matrix board where each cell is a battleship 'X' or empty '.', return the number of the battleships on board.
Battleships can only be placed horizontally or vertically on board. In other words, they can only be made of the shape 1 x k (1 row, k columns) or k x 1 (k rows, 1 column), where k can be of any size. At least one horizontal or vertical cell separates between two battleships (i.e., there are no adjacent battleships).

Example 1:

Input: board = [["X",".",".","X"],[".",".",".","X"],[".",".",".","X"]]
Output: 2
Example 2:

Input: board = [["."]]
Output: 0 */
void dfs(vector<vector<char>>& board,int i,int j,int n,int m){
        if(i<0 || i>=n || j<0 || j>=m || board[i][j]!='X') return;
        board[i][j]='.';
        dfs(board,i+1,j,n,m);
        dfs(board,i-1,j,n,m);
        dfs(board,i,j+1,n,m);
        dfs(board,i,j-1,n,m);
    }
    int countBattleships(vector<vector<char>>& board) {
        int ans=0,n=board.size(),m=board[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]=='X'){
                    dfs(board,i,j,n,m);
                    ans++;
                }
            }
        }
        return ans;
    }
