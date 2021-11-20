class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = size(nums), L = 0, R = n-1, mid, ans;
        while(L <= R) {
            mid = (L + R) >> 1;
            if(mid & 1) mid--;              
            if(mid+1 < n && nums[mid] == nums[mid+1]) 
                L = mid+2;                                 
            else                                      
                R = mid-1, ans = nums[mid];          
        }
        return ans;
        
    }
};