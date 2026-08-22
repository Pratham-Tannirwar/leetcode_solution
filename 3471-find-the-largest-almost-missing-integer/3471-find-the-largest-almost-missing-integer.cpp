class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int, int> mp;

        for(int j = 0; j <= nums.size() - k; j++) {
            
            unordered_set<int> st;

            for(int i = j; i < j + k; i++) {
                st.insert(nums[i]);
            }

            for(int x : st) {
                mp[x]++;
            }
        }

        int maxi = -1;

        for(int x : nums) {
            if(mp[x] == 1) {
                maxi = max(maxi, x);
            }
        }

        return maxi;
    }
};