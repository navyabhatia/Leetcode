class Solution {
public:
    bool isValid(string s) {
        stack<char>st; 
        for(auto i: s) {
            if(i=='(' || i=='{' || i == '[') st.push(i); 
            else {
                if(st.size() == 0) return false; 
                char ch = st.top(); 
                st.pop(); 
                if((i == ')' and ch == '(') or  (i == ']' and ch == '[') or (i == '}' and ch == '{')) continue;
                else return false;
            }
        }
        return st.empty(); 
    }
};