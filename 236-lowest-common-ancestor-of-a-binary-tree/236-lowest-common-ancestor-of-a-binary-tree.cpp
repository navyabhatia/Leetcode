/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL )return root;
        if(root->val==p->val )return p;
        if(root->val==q->val)return q;
        TreeNode* leftValReturned= lowestCommonAncestor(root->left,p,q);//left call
        TreeNode* rightValReturned= lowestCommonAncestor(root->right,p,q);//right call
        //current
        if(leftValReturned==NULL)return rightValReturned;
        else if(rightValReturned==NULL)return leftValReturned;
        else{
            //both are not NULL... i.e voh LCA hai
            return root;
        } 
    }
};