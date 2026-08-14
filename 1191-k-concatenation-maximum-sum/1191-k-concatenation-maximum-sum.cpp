class Solution {
public:
const long long MOD = 1e9 + 7;

    long long kadane(vector<int>& arr, int times) {
        long long curr = 0;
        long long ans = 0;

        for (int i = 0; i < times * arr.size(); i++) {
            curr = max(0LL, curr + arr[i % arr.size()]);
            ans = max(ans, curr);
        }

        return ans;
    }

    int kConcatenationMaxSum(vector<int>& arr, int k) {
        long long sum=0;
        int  n=arr.size();
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        if(k==1){
            return kadane(arr,1)%MOD;
        }
        long long ans = kadane(arr, 2);

        if (sum > 0) {
            ans += (k - 2LL) * sum;
        }
     return ans%MOD;
    }
};