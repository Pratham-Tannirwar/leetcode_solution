class Solution {
public:

    string stoneGameIII(vector<int>& stones) {
       int  n=stones.size();
        vector<int>a(n+1);

        for(int i=n-1;i>=0;i--){
            a[i]=stones[i]-a[i+1];
            if(i+2<=n){
                a[i]=max(a[i],stones[i]+stones[i+1]-a[i+2]);
            }
            if(i+3<=n){
            a[i]=max(a[i],stones[i]+stones[i+1]+stones[i+2]-a[i+3]);
  
            }
        }
        int diff=a[0];
        if(diff<0){
            return "Bob";
        }
        else if(diff>0){
            return "Alice";
        }
        
         return "Tie";
    }
};