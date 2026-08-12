class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int i=0;
        int length=0;
        for(int j=0;j<nums.size();j++){
            mp[nums[j]]++;
            while(mp[nums[j]]>k){
                mp[nums[i]]--;
                i++;
            }

          length=max(length,j-i+1);

        }
        return length;
    }
};