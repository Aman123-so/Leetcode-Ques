class Solution {
public:
    void dfs(int i, int j, vector<vector<int>>&grid){
        int n= grid.size();
        int m= grid[0].size();
         if( i<0 || i>=n || j<0 || j>=m || grid[i][j]==1){
            return ;
         }
         grid[i][j]=1;
         int row[4]= {-1, 0, 1, 0};
         int col[4]= {0,1, 0,-1};

         for(int k=0;k<4 ; k++){
            int newRow= i+row[k];
            int newCol= j+col[k];

            dfs(newRow, newCol, grid);
         }
    
    }
    int closedIsland(vector<vector<int>>& grid) {
        int n= grid.size();
        int m= grid[0].size();
        int ans=0;
        for(int i=0;i<n; i++){
            if(grid[i][0]==0)
            dfs( i,0,grid);

            if( grid[i][m-1]==0)
            dfs( i, m-1, grid);
        }
        for(int j=0 ; j<m; j++){
            if( grid[0][j]==0)
            dfs( 0,j,grid);

            if( grid[n-1][j]==0)
            dfs(n-1, j,grid);
        }

        for(int i=0;i<n ; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j]==0)
                ans++;
                dfs(i,j,grid);
            }
        }
        return ans;
    }
};