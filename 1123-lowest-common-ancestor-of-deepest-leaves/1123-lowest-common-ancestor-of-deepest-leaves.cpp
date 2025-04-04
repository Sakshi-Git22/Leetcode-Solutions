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
    unordered_map<int,int>mp;
    int maxDepth = 0;
    TreeNode* lca(TreeNode* root){
        if(root==NULL || mp[root->val]==maxDepth){
            return root;
        }
        TreeNode* left = lca(root->left);
        TreeNode* right =lca(root->right);
        if(left && right){
            return root;
        }
        else if(left){
            return left;
        }
        return right;
    }
    void findMaxDepth(TreeNode* root,int d){
        if(root==NULL){
            return;
        }
        maxDepth = max(maxDepth,d);
        mp[root->val]=d;
        findMaxDepth(root->left,d+1);
        findMaxDepth(root->right,d+1);
    }
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        findMaxDepth(root,0);
        TreeNode* deepestNode = lca(root);
        return deepestNode;
    }
};