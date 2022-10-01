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
    long long p=0;
    long long k=-2147483649;
    void inorder(TreeNode *root){
        if(root==NULL){
            return;
        }
        inorder(root->left);
        if(k>=root->val){
            p=1;
        }
        k=root->val;
        inorder(root->right);
    }
    bool isValidBST(TreeNode* root) {
        if(root->left==NULL && root->right==NULL)
            return true;
        inorder(root);
        if(p==1)
            return false;
        else
            return true;
    }
};