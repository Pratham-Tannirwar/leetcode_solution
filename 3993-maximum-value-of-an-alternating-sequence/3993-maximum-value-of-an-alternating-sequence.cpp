class Solution {
public:
    long long maximumValue(int n, int s, int m) {
        if(n==1){
            return s;
        }

        n--;
        long long maxi = (n/2 + n%2) * 1LL * m;
        int diff = n/2;
        maxi = maxi - diff;
        if(n%2==0){
            maxi++;
        }
        return maxi + s;
    }
};