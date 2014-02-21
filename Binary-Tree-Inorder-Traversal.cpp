/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode *root) {
        vector<int> result;
        if(NULL == root){
            return result;
        }

        stack<TreeNode*> sta;
        sta.push(root);
        while(!sta.empty()){
            TreeNode* curNode = sta.top();
            
        }
    }
};
