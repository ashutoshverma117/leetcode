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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<int>v;
        vector<vector<int>>k;
        queue<TreeNode *>q;
        if(root==NULL){
            return k;
        }
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            for(int i=0;i<size;i++){
            TreeNode *n=q.front();
            q.pop();
            v.push_back(n->val);
            if(n->left)q.push(n->left);
            if(n->right)q.push(n->right);
            }
            k.push_back(v);
            v.clear();
        }
        return k;
    }
        
};