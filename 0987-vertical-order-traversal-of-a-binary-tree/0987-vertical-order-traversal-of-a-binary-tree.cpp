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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,vector<int>>>mp;
        queue<pair<TreeNode*,pair<int,int>>>q;
        vector<vector<int>>ans;
        if(root==NULL){
            return ans;
        }
        q.push(make_pair(root,make_pair(0,0)));
        while(q.empty()!=true){
            pair<TreeNode*,pair<int,int>>curr = q.front();
            q.pop();
            TreeNode* frontNode = curr.first;
            int hd = curr.second.first;
            int lvl = curr.second.second;
            mp[hd][lvl].push_back(frontNode->val);
            if(frontNode->left){
                q.push(make_pair(frontNode->left,make_pair(hd-1,lvl+1)));
            }
            if(frontNode->right){
                q.push(make_pair(frontNode->right,make_pair(hd+1,lvl+1)));
            }
        }
        for (auto& [hd, levels] : mp) {
            vector<int> col;
            for (auto& [lvl, nodes] : levels) {
                sort(nodes.begin(), nodes.end());
                col.insert(col.end(), nodes.begin(), nodes.end());
            }
            ans.push_back(col);
        }
        return ans;
    }
};