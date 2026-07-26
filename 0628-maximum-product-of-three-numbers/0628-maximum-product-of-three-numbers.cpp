class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n= nums.size();
        int prod=1;
        int cntn=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                cntn++;
            }

        }
        if(cntn==0 || cntn==n){
            return nums[n-1]*nums[n-2]*nums[n-3];
        }
        int p=INT_MIN;
        if(cntn>=2){
            int p1=nums[0]*nums[1]*nums[n-1];
            int p2=nums[n-1]*nums[n-2]*nums[n-3];
             p=max(p1,p2);
             return p;
        }
        return 0;
       
        
    }
};