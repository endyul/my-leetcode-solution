/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
class Solution {
public:
    void connect(TreeLinkNode *root) {
        if(NULL == root){
            return;
        }
        TreeLinkNode* curFather = root;
        TreeLinkNode* curLine = root->left;
        while(curLine){
            while(curFather){
                curFather -> left -> next = curFather -> right;
                if(curFather -> next){
                    curFather -> right -> next = curFather -> next -> left;
                }
                curFather = curFather -> next;
            }
            curFather = curLine;
            curLine = curLine -> left;
        }
    }
};
