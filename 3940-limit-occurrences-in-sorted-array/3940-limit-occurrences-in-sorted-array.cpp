class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        vector<int>a;
        int n=nums.size();
        int cnt=1;
        a.push_back(nums[0]);
       for(int i=1;i<n;i++){
           if(nums[i]==nums[i-1]){
            cnt++;
            if(cnt<=k){
                a.push_back(nums[i]);
            }
           }
           else{
               a.push_back(nums[i]);
               cnt=1;
           }
       }
       return a;
    }
};