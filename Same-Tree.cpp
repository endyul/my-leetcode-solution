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
    bool isSameTree(TreeNode *p, TreeNode *q) {
        return _isSameTree(p, q);
    }
private:
    bool _isSameTree(TreeNode *p, TreeNode *q) {
        if((NULL == p && NULL != q) || (NULL != p && NULL == q)){
            return false;
        }
        if(NULL == p && NULL == q){
            return true;
        }
        if(p->val != q->val){
            return false;
        }else{
            return _isSameTree(p->left, q->left) && _isSameTree(p->right, q->right);
        }
    }
};

