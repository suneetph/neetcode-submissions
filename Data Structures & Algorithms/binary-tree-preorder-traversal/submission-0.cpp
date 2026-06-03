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
private: 
    void preorderTraverse(TreeNode* node, vector<int>& ans){
        if(node == nullptr){
            return;
        }
        ans.push_back(node->val);
        preorderTraverse(node->left, ans);
        preorderTraverse(node->right, ans);
    }   

public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        preorderTraverse(root, ans);
        return ans;
    }
};