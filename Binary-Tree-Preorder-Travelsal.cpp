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
    vector<int> preorderTraversal(TreeNode *root) {
        vector<int> result;
        if(NULL == root){
            return result;
        }
        stack<TreeNode*> sta;
        sta.push(root);
        while(!sta.empty()){
            TreeNode* curNode = sta.top();
            sta.pop();
            result.push_back(curNode->val);
            if(curNode->right){
                sta.push(curNode->right);
            }
            if(curNode->left){
                sta.push(curNode->left);
            }
        }

        return result;
    }
};
