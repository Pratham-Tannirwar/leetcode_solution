class Solution {
public:
    int maxProduct(int n) {
      vector<int>ans;
      while(n){
        int d=n%10;
        ans.push_back(d);
        n/=10;
      }  
      sort(ans.begin(),ans.end(),greater<int>());
      return ans[0]*ans[1];
    }
};