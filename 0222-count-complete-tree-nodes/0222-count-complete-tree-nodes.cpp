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
    // int cNode(TreeNode *r){
    //     if(r==nullptr)return 0;
    //     else return 1+cNode(r->left)+cNode(r->right);
    // }
    int countNodes(TreeNode* root) {
        if(root==nullptr)return 0;
        else return 1+countNodes(root->left)+countNodes(root->right);
        // return cNode(root);
    }
};