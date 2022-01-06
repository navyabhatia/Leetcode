

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int left=0,right=0,ans=0,n=s.size();
        unordered_set<char> st;
       while(left<n && right<n){
           if(st.find(s[right]) == st.end()){
               st.insert(s[right++]);
               ans = max(ans,right-left);
           }
           else{
               st.erase(s[left++]);
           }
       }
        return ans;
    }
};