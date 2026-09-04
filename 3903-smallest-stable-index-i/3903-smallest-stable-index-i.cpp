class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        int ans=INT_MAX;
    
        for(int i=0;i<n;i++){
           int  maxi=*max_element(nums.begin(),nums.begin()+i);

           int  mini=*min_element(nums.begin()+i,nums.end());
           if((maxi-mini)<=k){
               ans=min(ans,i);
           }
        }
        if(ans==INT_MAX){
            return -1;
        }
        return ans;
    }
};