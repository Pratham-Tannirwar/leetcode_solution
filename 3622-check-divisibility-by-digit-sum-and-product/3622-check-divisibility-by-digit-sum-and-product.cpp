class Solution {
public:
    bool checkDivisibility(int n) {
        long sum=0;
        long long product=1;
        int a=n;
        while(n){
            int d=n%10;
            sum+=d;
            product*=d;
            n=n/10;
            }
      long long total=sum+product;

      return a%total==0;

    }
};