class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                cnt++;
            }
        }
        vector<int>ans;
        int i=0;
         while(cnt){
            if(nums[i]%2==0){
                ans.push_back(nums[i]);
                cnt--;
            }
            i++;
         }
        for(int i=0;i<n;i++){
            if(nums[i]%2){
                ans.push_back(nums[i]);
            }
        }
     return ans;

    }
};