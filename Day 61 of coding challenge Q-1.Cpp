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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp = NULL,* cur=NULL;
        if(list1==NULL&&list2==NULL) return NULL;
        int m =0,n=0;
        if(list1==NULL) return list2;
        if(list2==NULL) return list1;
            n = list1->val;
            m = list2->val;
            if(n<=m){
                temp=list1;
                cur=list1;
            }else{
                temp=list2;
                cur=list2;
            }
        while(list1&&list2){
                    n = list1->val;
                    m = list2->val;
                    if(n<=m){
                        if(cur==list1){
                            list1=list1->next;
                        }else{
                            cur->next=list1;
                            cur = list1;
                            list1=list1->next;
                        }
                    }else{
                        if(cur==list2){
                            list2=list2->next;
                        }else{
                            cur->next=list2;
                            cur = list2;
                            list2=list2->next;
                        }
                    }
                    // ListNode* temp2 = cur;
                    // while(temp2){
                    //     cout<<temp2->val<<" ";
                    //     temp2 = temp2->next;
                    // }
                    // cout<<"the lists are at "<<list1->val<<" "<<list2->val<<endl;

// 1  2 - 4
// |
// 1- 3 -4    list1 - 2, list2 - 3, cur - 1


        }
      
        if(list1!=NULL){
            cur->next=list1;
        }
        if(list2!=NULL){
            cur->next=list2;
        }
        return temp;
    }
};
