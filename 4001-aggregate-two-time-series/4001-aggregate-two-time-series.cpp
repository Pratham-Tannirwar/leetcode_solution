class Solution {
public:
    vector<vector<int>> aggregateTimeSeries(vector<vector<int>>& series1, vector<vector<int>>& series2) {
        set<int>s;
        for(auto nums:series1){
            s.insert(nums[0]);
        }
        for(auto nums:series2){
            s.insert(nums[0]);
        }
        vector<vector<int>>ans;
        for(auto i:s){
            int value=0;
            auto k=lower_bound(series1.begin(),series1.end(),vector<int>{i,-1});
            if(k!=series1.end()){
                value+=(*k)[1];
            }
            auto m=lower_bound(series2.begin(),series2.end(),vector<int>{i,-1});
            if(m!=series2.end()){
                value+=(*m)[1];
            }
            ans.push_back({i,value});
        }
        return ans;

    }
};