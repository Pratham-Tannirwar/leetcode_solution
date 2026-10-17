class Solution {
public:
int getdigitsum(int num1){
int sum=0;
   while(num1){
        int d=num1%10;
        sum+=d;
        num1=num1/10;
    }
    return sum;
}
    int minSwaps(vector<int>& nums) {
        int n=nums.size();
        vector<int>aftersort(nums);

        auto lambda=[&](int num1,int num2){
            int dsum1=getdigitsum(num1);
            int dsum2=getdigitsum(num2);

            if(dsum1!=dsum2){
                return dsum1<dsum2;
            }
            return num1<num2;
        };
        sort(aftersort.begin(),aftersort.end(),lambda);
       
       
        unordered_map<int,int>idx;
        for(int i=0;i<n;i++){
            idx[nums[i]]=i;
        }
        int swapcnt=0;
        for(int i=0;i<n;i++){
            int expected=aftersort[i];
            int currval=nums[i];

            if(expected==currval){
                continue;
            }

            int j=idx[expected];
            nums[i]=expected;
            nums[j]=currval;

            idx[expected]=i;
            idx[currval]=j;
            swapcnt++;
        }
   return swapcnt;
    }
};