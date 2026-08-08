class Solution {
public:
    vector<int> validSequence(string word1, string word2) {
        
           int n=word1.length();
           int m=word2.length();

           vector<int>right(n,0);
           int rightmatch=0;
           int j=m-1;
           int i=n-1;
           while(i>=0){
            if(j>=0 && word1[i]==word2[j]){
                rightmatch++;
                j--;
            }
            right[i]=rightmatch;
              i--;
           }
           vector<int>seq;
           bool changepower=true;
              i=0;
               j=0;
           while(i<n && j<m){
              if(word1[i]==word2[j]){
                seq.push_back(i);
                j++;
              }
              else if(changepower==true && i+1<n && right[i+1]>=m-j-1){
                seq.push_back(i);
                j++;
                changepower=false;
              }
              i++;
           }
       return j==m?seq:vector<int>();
    }
};