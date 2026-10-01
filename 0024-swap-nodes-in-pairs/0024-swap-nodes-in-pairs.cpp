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
    ListNode* swapPairs(ListNode* head) {
     if(head==NULL || head->next==NULL) return head;
     ListNode* s=head->next;
     ListNode* f=head;
     ListNode* dum=new ListNode(0);
     dum->next=head;
     ListNode* ans=head->next;
     while(f!=NULL && s!=NULL){
        f->next=s->next;
        s->next=f;
        dum->next=s;
        dum=f;
        f=f->next;
        if(f!=NULL){
            s=f->next;
        }
     }
     return ans;
    }
};