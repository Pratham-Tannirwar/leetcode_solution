class Solution {
public:
    bool stoneGameIX(vector<int>& stones) {
      int cntz=0,cnto=0,cntt=0;
      for(int val:stones){
          int type=val%3;
          if(type==0){
            cntz++;
          }
          else if(type==1){
            cnto++;
          }
          else{
            cntt++;
          }
      }
      if(cntz%2==0){
        return cnto>=1 && cntt>=1;
      }  
      return abs(cnto-cntt)>2;
    }
};