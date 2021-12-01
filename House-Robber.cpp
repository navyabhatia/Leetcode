class Solution {
public:
    int t[101];
    int rob(vector<int>& arr) {
    int n = arr.size();
    if(n == 0)
        return 0;
    t[0] = 0;
    t[1] = arr[0];
	
    
    for(int i = 1; i < n; i++) 
        
    {
        t[i + 1] = max(t[i - 1] + arr[i], t[i]);
    
    }
    
    return t[n];
}
};
