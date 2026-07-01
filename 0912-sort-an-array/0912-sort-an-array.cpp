class Solution {
public:
    vector<int> sortArray(vector<int>& a) {
        int maxi=*max_element(a.begin(),a.end());
        int mini=*min_element(a.begin(),a.end());
        vector<int>cnt(maxi-mini+1,0);
        int n=a.size();
         for(int x:a){
           cnt[x-mini]++;
            }
            int index=0;
            for(int i=0;i<cnt.size();i++){
                while(cnt[i]>0){
                    a[index++]=i+mini;
                    cnt[i]--;
                }
            }
        return a;
    }
};