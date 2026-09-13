class Solution {
public:
    vector<vector<int>> cyclicShift(int n, vector<vector<int>>& grid, vector<int>& rowshift, vector<int>& colshift) {
        
    
        for(int i=0;i<n;i++){
            rowshift[i]%=n;

            reverse(grid[i].begin(),grid[i].end());

            reverse(grid[i].begin(),grid[i].begin()+n-rowshift[i]);

            reverse(grid[i].begin()+n-rowshift[i],grid[i].end());
        }

        
        for(int j=0;j<n;j++){
            vector<int> col;

            for(int i=0;i<n;i++){
                col.push_back(grid[i][j]);
            }

            colshift[j]%=n;

            reverse(col.begin(),col.end());

            reverse(col.begin(),col.begin()+n-colshift[j]);

            reverse(col.begin()+n-colshift[j],col.end());

            for(int i=0;i<n;i++){
                grid[i][j]=col[i];
            }
        }

        return grid;
    }
};