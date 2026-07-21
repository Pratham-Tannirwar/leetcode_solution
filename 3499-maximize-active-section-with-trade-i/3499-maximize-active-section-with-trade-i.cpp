class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int n=s.length();
        
        int acnt=count(s.begin(),s.end(),'1');
        vector<int>inactiveblock;
        int i=0;
        while(i<n){
            if(s[i]=='0'){
             int start=i;
             while(i<n && s[i]=='0'){
                i++;
             }
             inactiveblock.push_back(i-start);
            }
            else{
                i++;
            }
            
        }
        int maxi=0;
        for(int i=1;i<inactiveblock.size();i++){
            maxi=max(maxi,inactiveblock[i]+inactiveblock[i-1]);
        }
return maxi+acnt;
       
    }
};