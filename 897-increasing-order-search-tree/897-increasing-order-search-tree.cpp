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
class Solution {
    vector<int>v;
    int inorder(TreeNode*root){
        if(root==NULL)
            return 0;
        inorder(root->left);
        v.push_back(root->val);
        inorder(root->right);
        return 0;
    }
public:
    TreeNode* increasingBST(TreeNode* root) {
        if(root==NULL)
            return NULL;
        inorder(root);
        TreeNode* curr=new TreeNode(v[0]);
        TreeNode*p=curr;
        for(int i=1;i<v.size();i++){
            curr->right=new TreeNode(v[i]);
            curr=curr->right;
        }
        return p;
    }
};