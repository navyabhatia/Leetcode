class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
        stack <int> st ; 
        vector<int> ans(nums.size()) ;
        int s = nums.size() ; 
        
        
        for(int i=s-1 ; i>=0 ; i--) {
            st.push(nums[i]) ;
        } 
        
        for(int i=s-1 ; i>=0 ; i--) {
            
            if(st.empty()) 
                ans[i] = -1 ;
            
            else{
                while (!st.empty() && st.top() <= nums[i] ) {
                    st.pop() ;
                }
                if(st.empty()) 
                    ans[i] =  -1 ;
                else{
                    ans[i] =  st.top() ; 
                }
            }    
            st.push(nums[i]) ;
        }
        
        return ans ;
        
    }
};