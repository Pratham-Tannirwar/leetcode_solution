class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0;
        if(s==""){
            return true;
        }
        if(s.size()==t.size()){
            return s==t;
        }
        for(int j=0;j<t.size();j++){
           
            if(s[i]==t[j]){
                i++;
              if(i==s.size()){
              return true;
             }
            }
        }
        return false;
    }
};