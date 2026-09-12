class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int, vector<int>> mp;

        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]].push_back(i);
        }

        int cnt = 0;

        for (auto &p : mp) {
            if (p.second.size() >= 3) {
                int diff = p.second[1] - p.second[0];
                bool flag = true;

                for (int j = 2; j < p.second.size(); j++) {
                    if (p.second[j] - p.second[j - 1] != diff) {
                        flag = false;
                        break;
                    }
                }

                if (flag) {
                    cnt++;
                }
            }
        }

        return cnt;
    }
};