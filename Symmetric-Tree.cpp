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
    bool isSymmetric(TreeNode *root) {
        return _isSymmetric(root, root);
    }
private:
    bool _isSymmetric(TreeNode* lchild, TreeNode* rchild){
        if(NULL == lchild || NULL == rchild){
            if(NULL == lchild && NULL == rchild){
                return true;
            }else{
                return false;
            }
        }

        if(lchild->val == rchild->val){
            return _isSymmetric(lchild->right, rchild->left) && _isSymmetric(lchild->left, rchild->right);
        }else{
            return false;
        }

    }
};
