class Solution {
public:
    int maxPower(string s) {
        int ans=1;//overall ans
        int cnt=1;//current streak
        for(int i=1;i<s.length();i++){
           if(s[i]==s[i-1]){
               cnt++;
               ans=max(ans,cnt);
           }
            else cnt=1;
        }
        return ans;
    }
};