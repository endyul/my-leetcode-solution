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
    ListNode *deleteDuplicates(ListNode *head) {
        if(NULL == head || NULL == head->next){
            return head;
        }
        ListNode* curNumNode = head;
        ListNode* curNode = head->next;
        while(curNode){
            while(curNode && curNode->val == curNumNode->val){
                ListNode* preNode = curNode;
                curNode = curNode -> next;
                delete preNode;
            }
            curNumNode -> next = curNode;
            if(NULL == curNode || NULL == curNode -> next){
                return head;
            }
            curNumNode = curNode;
            curNode = curNode -> next;
        }

        return head;
    }
};
