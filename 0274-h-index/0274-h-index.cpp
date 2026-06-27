class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n=citations.size();
       int maxi=*max_element(citations.begin(),citations.end());
       int ans=0;
       for(int i=0;i<=maxi;i++){
            int cnt=0;
            for(int j=0;j<n;j++){
                if(citations[j]>=i){
                    cnt++;
                }
                if(cnt>=i){
                    ans=max(ans,i);
                }
            }
       }
       return ans;
       
    }
};