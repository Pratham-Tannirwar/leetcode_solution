class Solution {
public:
    int findLucky(vector<int>& nums) {
      int maxi=*max_element(nums.begin(),nums.end());
      int cnt=INT_MIN;
      map<int,int>mp;
      for(int i=0;i<nums.size();i++){
         mp[nums[i]]++;
      }
     for(auto i:mp){
        if(i.first==i.second){
            cnt=max(cnt,i.first);
        }
     }
      if(cnt==INT_MIN){
        return -1;
      }
      return cnt;
    }
};