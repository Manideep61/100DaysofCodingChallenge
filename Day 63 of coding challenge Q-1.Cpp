/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* temp = head;
        ListNode* m=NULL, * n=NULL;
        while(temp!=NULL){
            m = temp->next;
            temp->next = n;
            n = temp;
            temp = m;
        }
        head=n;
        return head;
    }
};
