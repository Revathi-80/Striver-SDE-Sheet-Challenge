void solve(int col, vector<vector<int>>&board, vector<vector<int>>&ans,vector<int>&leftrow, vector<int>&lowerdiagonal, vector<int>&upperdiagonal, int n ){
    if(col==n){
        vector<int>temp;
        for(auto it:board){
            for(int i:it)
                temp.push_back(i);
        }
        ans.push_back(temp);
        return;
    }
    for(int row=0;row<n;row++){
        if(leftrow[row]==0 && lowerdiagonal[row+col]==0 && upperdiagonal[n-1+col-row]==0){
            board[row][col]=1;
            leftrow[row]=1;
            lowerdiagonal[row+col]=1;
            upperdiagonal[n-1+col-row]=1;
            solve(col+1,board,ans,leftrow,lowerdiagonal,upperdiagonal,n);
            board[row][col]=0;
             leftrow[row]=0;
            lowerdiagonal[row+col]=0;
            upperdiagonal[n-1+col-row]=0;
        }
    }
}
vector<vector<int>> solveNQueens(int n) {
    vector<vector<int>>ans;
    vector<vector<int>>board(n,vector<int>(n,0));
    vector<int>leftrow(n,0),upperdiagonal(2*n-1,0),lowerdiagonal(2*n-1,0);
    solve(0,board,ans,leftrow,lowerdiagonal,upperdiagonal,n);
    return ans;
}
