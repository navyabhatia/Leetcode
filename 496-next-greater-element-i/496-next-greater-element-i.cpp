class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int>v;
        int j=0;
        for(int i=0;i<nums1.size();i++)
        {
            int flag=0;
            for( j=0;j<nums2.size();j++)
            {
                if(nums1[i]==nums2[j])
                {
                    for(int k=j+1;k<nums2.size();k++)
                    {
                        if(nums2[k]>nums1[i])
                        {
                            flag=1;
                            v.push_back(nums2[k]);
                            break;
                        }
                        
                        
                    }
                }
                
                
            }
            
            if(flag==0)
            v.push_back(-1);
            
        }
        
        return v;
    }
};