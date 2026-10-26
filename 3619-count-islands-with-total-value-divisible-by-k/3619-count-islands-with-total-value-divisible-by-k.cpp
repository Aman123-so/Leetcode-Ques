class Solution {
public:
    long long dfs(int i, int j, vector<vector<int>>&grid){
        int n= grid.size();
        int m= grid[0].size();
       

        if( i<0|| i>=n || j<0 || j>= m || grid[i][j]==0){
            return 0;
        }
        long long sum= grid[i][j];
        grid[i][j]=0;
        int row[4]= {-1,0,1, 0};
        int col[4]= {0,1, 0, -1};

        for(int k=0; k<4; k++){
            int newRow= i+row[k];
            int newCol= j+col[k];

           sum +=  dfs(newRow, newCol, grid);
        }
        return sum;

    }
    int countIslands(vector<vector<int>>& grid, int k) {

        int n= grid.size();
        int m= grid[0].size();
        int ans=0;
        for(int i=0;i<n; i++){
            for(int j=0;j<m; j++){
                if( grid[i][j]!=0){
                    long long sum= dfs(i, j, grid);
                    if( sum%k==0){
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
};