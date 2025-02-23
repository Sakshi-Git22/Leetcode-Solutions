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
    TreeNode* solve(int i1, int i2, int j1, int j2, vector<int>& preorder, vector<int>& postorder ,unordered_map<int,int>mp ){
        if(i1>i2 || j1>j2){
            return NULL;
        }
        TreeNode* root = new TreeNode(preorder[i1]);
        if(i1==i2){
            return root;
        }
        int r = mp[preorder[i1+1]];
        int size = r-j1 + 1;
        root->left = solve(i1+1,i1+size,j1,r,preorder,postorder,mp);
        root->right = solve(i1+size+1,i2,r+1,j2-1,preorder,postorder,mp);
        return root;
    }
    TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
        unordered_map<int,int>mp;
        int n = postorder.size();
        for(int i=0;i<n;i++){
            mp[postorder[i]]=i;
        }
        return solve(0,n-1,0,n-1,preorder,postorder,mp);
    }
};