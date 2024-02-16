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
    int count=0;
    int DFS(TreeNode* root, int maxV){
        if(root==nullptr)return 0;
        if(root->val>=maxV){
            count++;
            maxV=max(root->val,maxV);
        }
        DFS(root->left,maxV);
        DFS(root->right,maxV);
        return count;
    }
    int goodNodes(TreeNode* root) {
        int c=0;
        int max=root->val;
        
         c=DFS(root,root->val);
        return c;

    }
};