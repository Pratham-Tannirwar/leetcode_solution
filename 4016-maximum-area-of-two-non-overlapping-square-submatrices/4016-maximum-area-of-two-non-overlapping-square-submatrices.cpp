class Solution {
public:
    int maxArea(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<int>> dp(n, vector<int>(m, 0));
        for(int i = 0; i<n; i++){
            for(int j= 0; j < m;j++){
                if(mat[i][j] == 1){
                    if(i == 0 || j == 0) dp[i][j] = 1;
                    else dp[i][j] = min({dp[i][j - 1], dp[i - 1][j], dp[i -1][j - 1]}) + 1;
                }
            }
        }

        int start = 1;
        int end = min(n, m);
        int ans = 0; // k
        while(start <= end){
            int mid = start + (end - start)/2;
            int rmn = 1e9, cmn = 1e9;
            int rmx = -1e9, cmx = -1e9;

            bool f = false;
            for(int i = 0; i< n; i++){
                for(int j = 0; j <m; j++){
                    if(dp[i][j] >= mid){
                        rmn = min(rmn, i);
                        cmn = min(cmn, j);
                        rmx = max(rmx, i);
                        cmx = max(cmx, j);
                    }
                }
            }
            if(rmx - rmn >= mid || cmx - cmn >= mid){
                f = true;
            }
            if(f){
                ans =mid;
                start = mid + 1;
            }
            else end = mid - 1;
        }
        return ans * ans;
    }
};