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
    bool fun(TreeNode *p,int num){
        if(p==nullptr)return false;
        num-=p->val;
        if(p->left==nullptr && p->right==nullptr){
            return (num==0);
        }
        return (fun(p->left,num) || fun(p->right,num));
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        return fun(root,targetSum);
        
    }
};