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
    ListNode* createnewlist(ListNode* head){
        ListNode*temp = head,* head2=NULL,* sample=NULL;
        while(temp!=NULL){
            ListNode*newone=new ListNode(temp->val);
            if(head2==NULL){
                sample=newone;
                head2=newone;
            }else{
                head2->next=newone;
                head2=newone;
            }
            temp=temp->next;
        }
        return sample;
    }
    ListNode* reverselist(ListNode* sample){
        ListNode* temp1=sample;
        ListNode* next=NULL,* prev = NULL;
        while(temp1!=NULL){
            next=temp1->next;
            temp1->next=prev;
            prev=temp1;
            temp1=next;
        }
        sample=prev;
        temp1=sample;
        return temp1;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* sample=NULL;
        sample = createnewlist(head);
        bool result=true;
        ListNode* temp1 = reverselist(sample);
        ListNode* temp2= head;
        while(temp2!=NULL){
            if((temp1->val)==(temp2->val)){
                result=true;
            }else{
                return false;
            }
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return result;
    }
};
