class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        int n=nums1.size();
       vector<int>count(1e5+1,0);

       for(int i=0;i<n;i++){
          int d=abs(nums1[i]-nums2[i]);
          count[d]++;
       }
       int k=k1+k2;
       for(int curr=1e5;curr>0 && k>0 ;curr--){
        int currop=min(count[curr],k);
        count[curr]-=currop;
        count[curr-1]+=currop;
        k-=currop;
       }
       long long result=0;
       for(long long d=1;d<=1e5;d++){
        result+=1LL*(count[d]*d*d);
       }
       return result;
    }

};