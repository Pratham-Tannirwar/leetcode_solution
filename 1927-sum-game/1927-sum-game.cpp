class Solution {
public:
    bool sumGame(string nums) {
        int ls=0;
        int lb=0;
        int rs=0;
        int rb=0;
        int n=nums.size();

        for(int i=0;i<n/2;i++){
            if(nums[i]!='?'){
                ls+=nums[i]-'0';
            }
            else{
                lb++;
            }
        }
        for(int i=n/2;i<n;i++){
            if(nums[i]!='?'){
                rs+=nums[i]-'0';
            }
            else{
                rb++;
            }
        }
        if(rb+lb==0){
            return ls!=rs;
        }
        if((rb+lb)%2){
            return true;
        }
        int mini=min(lb,rb);
        rb-=mini;
        lb-=mini;
        if(lb>0){
            if(ls>rs){
                return true;
            }
            if(9*(lb/2)==rs-ls){
                return false;
            }
            else{
               return true;
            }
        }
        else{
            if(rs>ls){
                return true;
            }
            if(9*(rb)/2==ls-rs){
                return false;
            }
            else{
                return true;
            }
        }
    }
};