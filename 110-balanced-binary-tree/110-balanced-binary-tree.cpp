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
public:
    bool ans=true;
    int bol(TreeNode* root){
        if(root==NULL)
            return 0;
        int left=bol(root->left);
        int right=bol(root->right);
        if(abs(left-right)>1)
            ans=false;
        if(left>right)
            return left+1;
        else
            return right+1;
        
    }
    bool isBalanced(TreeNode* root) {
        bol(root);
        return ans;
        
    }
};