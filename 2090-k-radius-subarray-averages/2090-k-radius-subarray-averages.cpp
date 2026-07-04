class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n=nums.size();
        if(k==0){
            return nums;
        }
        vector<int>result(n,-1);
        if(n<2*k+1){
              return result;
        }
        long long window=0;
        int l=0;
        int r=2*k;
        int i=k;
        for(int j=l;j<=r;j++){
            window+=nums[j];
        }
        int cnt=2*k+1;
        result[i]=window/(2*k+1);
        i++;
        r++;
        while(r<n){
            int owindow=nums[l];
            int cwindow=nums[r];

            window=window+cwindow-owindow;
            result[i]=window/cnt;
            i++;r++;
            l++;
        }
        return result;
    }
};