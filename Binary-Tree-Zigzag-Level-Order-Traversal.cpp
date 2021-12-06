class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>traversal;
        if(root==NULL) return traversal;
        queue<TreeNode*>q;
        q.push(root);
        int state=0;
        while(!q.empty()){
            int size=q.size();
            vector<int>level(size);
            for(int i=0;i<size;i++){
                TreeNode* cur=q.front(); q.pop();
                int ind=state==0?i:(size-i-1);
                level[ind]=cur->val;
                if(cur->left) q.push(cur->left);
                if(cur->right) q.push(cur->right);
            }
            traversal.push_back(level);
            state^=1;
        }
        return traversal;
        
        
    }
};