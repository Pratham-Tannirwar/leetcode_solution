class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        set<int>s;
        int n=digits.size();
        for(int i=0;i<n;i++){
              if(digits[i]==0){
                continue;
              }
              for(int j=0;j<n;j++){
                if(i==j){
                    continue;
                }
                for(int k=0;k<n;k++){
                    if(i==k || j==k ){
                        continue;
                    }
                    if(digits[k]%2==0){
                    int number=100*digits[i]+10*digits[j]+digits[k];
                    s.insert(number);
                    }
                }
              }
        }
        return s.size();
    }
};