class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& nums) {
        
        int n=nums.size();
        vector<int>a=nums;
        sort(a.begin(),a.end());
        unordered_map<int,int>mp;
         int m=1;
        for(int j:a){
            if(mp.find(j)==mp.end()){
                mp[j]=m;
                m++;
            }
            
                    }
        vector<int>result;
        for(int i=0;i<n;i++){
            result.push_back(mp[nums[i]]);
        }
        return result;
    }
};