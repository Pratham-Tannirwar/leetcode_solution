class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int odd = 0, even = 0;

        for (int x : nums1) {
            if (x % 2) {
                odd++;
            }
            else {
                even++;
            }
        }

     sort(nums1.begin(),nums1.end());
     if(even==0 || odd==0){
        return true;
     }
     if(nums1[0]%2==0){
        return false;
     }
        
    if (odd == 1 && even == 1 && nums1[0]%2==0) {
             return false;
    }
    

     return true;
    }
};