/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */



/*class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        queue<TreeNode*>q;
        if(!root)return ans;int k=1;
        q.push(root);
        while(!q.empty()){
            int count=q.size();
            vector<int>v;
            for(int j=0;j<count;j++){
                TreeNode* temp = q.front();
                q.pop();
                if(k%2==0){
                    if(temp->left)q.push(temp->left);
                    if(temp->right)q.push(temp->right);
                }
                else if(k%2!=0){
                    if(temp->right)q.push(temp->right);
                if(temp->left)q.push(temp->left);
                }
                
                v.push_back(temp->val);
            }
            ans.push_back(v);
            k++;
        }
        return ans;
    }
};
*/
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        queue<TreeNode*>q;
        if(!root)return ans;int k=1;
        q.push(root);
        while(!q.empty()){
            int count=q.size();
            vector<int>v;
            for(int j=0;j<count;j++){
                TreeNode* temp = q.front();
                q.pop();
                if(temp->left)q.push(temp->left);
                if(temp->right)q.push(temp->right);
                v.push_back(temp->val);
            }
            if(k%2==0)reverse(v.begin(),v.end());// if even row then reverse and add to list else add normally
            ans.push_back(v);
            k++;
        }
        return ans;
    }
};