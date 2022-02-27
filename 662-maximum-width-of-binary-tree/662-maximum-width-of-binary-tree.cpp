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
    int widthOfBinaryTree(TreeNode* root) {
        map<TreeNode*,int>mappi;
        int maximum=0;
        queue<TreeNode*>q;
        q.push(root);
        mappi[root]=0;
        int min_all = 0;
        while(!q.empty()){
            int size=q.size();
            int left = 0;
            int right = 0;
            int min_here = INT_MAX;
            for(int i=0;i<size;i++){
                TreeNode* curr=q.front();
                if(curr->left!=NULL)
                {
                    mappi[curr->left]=(2*mappi[curr])+1 - min_all;
                    q.push(curr->left);
                    // index=mappi[curr->left];
                }
                if(curr->right!=NULL)
                {
                    mappi[curr->right]=(2*mappi[curr])+2 - min_all;
                    q.push(curr->right);
                    // indexi=mappi[curr->right];
                }
                if(i==0)
                {
                    left = mappi[curr];
                }
                if(i==size-1)
                {
                    right = mappi[curr];
                }
                min_here = (min_here,mappi[curr]);
                q.pop();
            }
            min_all = min_here;
            maximum=max(maximum,(right-left+1));
        }
        return maximum;
        
    }
};