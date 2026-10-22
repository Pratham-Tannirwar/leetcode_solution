class Solution {
public:
int solve(vector<int>& nums){
    int n=nums.size();
    vector<int>a=nums;
    for(int i:nums){
        a.push_back(i);
    }
    int cnt=1;
    for(int i=1;i<a.size();i++){
        if(a[i]<a[i-1]){
            cnt=1;
        }
        else{
            cnt++;
        }
        if(cnt==n){
            return i+1-n;
        }
    }
     cnt=1;
    for(int i=1;i<a.size();i++){
        if(a[i]>a[i-1]){
            cnt=1;
        }
        else{
            cnt++;
        }
        if(cnt==n){
            return i+2-n;
        }
    }
    return 1e7;
}
    int minOperations(vector<int>& nums) {
        if(nums.size()==1){
            return 0;
        }
        int ans=solve(nums);
        reverse(nums.begin(),nums.end());
        ans=min(ans, solve(nums)+1);
        return ans==1e7?-1:ans;
    }
};