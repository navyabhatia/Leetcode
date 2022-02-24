// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here.. 
       /* vector<int>v;
        int k= sizeOfStack%2==0 ? (sizeOfStack/2)+1:(sizeOfStack+1)/2;
        while(k!=1 && !st.empty()){
            v.push_back(st.top());
            st.pop();
        }
        st.pop();
        while(!st.empty()){
            v.push_back(st.top());
            st.pop();
        }
        for(int i=0;i<v.size();i++){
            st.push(v[i]);
        }*/
        int mid=sizeOfStack%2==0 ? (sizeOfStack/2)+1:(sizeOfStack+1)/2;
       vector<int> v;
       for(int i=0;i<mid-1;i++)
       {
           v.push_back(s.top());
           s.pop();
       }
       s.pop();
       for(int i=v.size()-1;i>=0;i--)
       {
           s.push(v[i]);
       }
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}
  // } Driver Code Ends