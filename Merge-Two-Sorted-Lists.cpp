/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        ListNode* p1 = l1;
        ListNode* p2 = l2;
        ListNode* result = NULL;
        ListNode** pCur = &result;
        while(p1 && p2){
            if(p1->val < p2->val){
                *pCur = p1;
                p1 = p1 -> next;
            }else{
                *pCur = p2;
                p2 = p2 -> next;
            }
            pCur = &((*pCur) -> next);
        }
        *pCur = (NULL == p2) ? p1 : p2;
        return result;
    }
};

