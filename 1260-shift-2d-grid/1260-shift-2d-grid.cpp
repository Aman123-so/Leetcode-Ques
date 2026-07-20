class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
       int row= grid.size();
       int col= grid[0].size();
       int sz= col*row;

       k= k%sz;
       vector<vector<int>>ans(row,vector<int>(col));
       for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            int newIndx= i*col+j+k;
            int newRow= (newIndx /col)%row;
            int newCol= newIndx%col;
            ans[newRow][newCol]= grid[i][j];

        }
       } 
       return ans;
    }
};