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
    int diameter=0;
    int dia(TreeNode* root){
        if(root==NULL)
            return 0;
        int left=dia(root->left);
        int right=dia(root->right);
        diameter=max(diameter,left+right);
        if(left>right)
            return left+1;
        else
            return right+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
         dia(root);
        return diameter;
    }
};