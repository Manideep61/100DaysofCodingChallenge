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
    int getDecimalValue(ListNode* head) {
        ListNode* temp = head;
        int result=0;
    while(temp!=NULL){
        int m = temp->val;
        if(m==1){
            result=2*result+1;
        }else if(m==0){
            result=2*result;
        }
        temp = temp->next;
    }
        return result;
    }
};


