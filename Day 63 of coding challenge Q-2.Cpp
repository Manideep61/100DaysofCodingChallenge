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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp = head;
        ListNode* prev=NULL, * next=NULL;
        while(temp!=NULL){
            next=temp->next;
            if(temp->val==val){
                if(prev==NULL){
                    head=temp->next;
                    temp=temp->next;
                }else{
                    temp=temp->next;
                    prev->next=next;
                }
            }else{
                prev=temp;
                temp=temp->next;
            }
        }
        return head;
    }
};
