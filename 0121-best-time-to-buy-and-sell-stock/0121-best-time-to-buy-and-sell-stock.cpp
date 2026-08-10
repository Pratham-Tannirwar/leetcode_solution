class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int curr = 0;
        int ans = 0;

        for (int i = 1; i < prices.size(); i++) {
            int diff = prices[i] - prices[i - 1];

            curr = max(0, curr + diff);
            ans = max(ans, curr);
        }

        return ans;
    }
};