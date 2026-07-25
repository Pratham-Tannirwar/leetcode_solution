class Solution {
public:
    int maxProduct(int n) {
      int maxi=INT_MIN;
      int secondmaxi=INT_MIN;
      while(n){
        int d=n%10;
        if(d>maxi){
            secondmaxi=maxi;
            maxi=d;
        }
        else if(d>secondmaxi){
            secondmaxi=d;
        }
        n/=10;
      }  
      return maxi*secondmaxi;
      
    }
};