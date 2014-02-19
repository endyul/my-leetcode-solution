/*
 * 计算二叉树的深度
 * 深搜一下就ok
 */

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
    int maxDepth(TreeNode *root) {
        if(NULL == root){
            return 0;
        }

        stack<TreeNode*> treeNodeStack;
        stack<int> depthStack;

        treeNodeStack.push(root);
        depthStack.push(1);
        int cntDepth = -1;

        while(!treeNodeStack.empty()){
            int curDepth = depthStack.top();
            depthStack.pop();

            if(curDepth > cntDepth){
                cntDepth = curDepth;
            }
        
            TreeNode* curNode = treeNodeStack.top();
            treeNodeStack.pop();
            
            if(curNode->left){
                treeNodeStack.push(curNode->left);
                depthStack.push(curDepth + 1);
            }

            if(curNode->right){
                treeNodeStack.push(curNode->right);
                depthStack.push(curDepth + 1);
            }
        }

        return cntDepth;
    }
};
