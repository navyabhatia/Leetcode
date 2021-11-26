class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int L = 0, R = size(nums)-1, mid, ans = size(nums);
        while(L <= R) {
            mid = (L + R) >> 1;
            if(nums[mid] < target) 
                L = mid + 1;
            else R = mid - 1, ans = mid;
        }
        return ans;
        
    }
};