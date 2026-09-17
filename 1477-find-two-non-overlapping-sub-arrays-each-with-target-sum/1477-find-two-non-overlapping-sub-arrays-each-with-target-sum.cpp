class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
        int n=arr.size();
        vector<int>a(n,INT_MAX);
        int j=0,sum=0;
        int bestmin=INT_MAX;
        int result=INT_MAX;
        for(int i=0;i<n;i++){
            
            sum+=arr[i];
          
            while(i<n && sum>target){
              sum-=arr[j];
               j++;
            }
              if(sum==target){
                int len=i-j+1;
                if(j>0 && a[j-1]!=INT_MAX){
                result=min(result,len+a[j-1]);
                }
                bestmin=min(bestmin,len);
            }
            a[i]=bestmin;
        }
        
        return result==INT_MAX?-1:result;
    }
};