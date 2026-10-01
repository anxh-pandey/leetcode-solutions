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
        ListNode* d=new ListNode(0);
        d->next=head;
        ListNode* ans=head->next;
        ListNode* s=head->next;
        ListNode* f=head;
        while(f!=NULL && s!=NULL){
            f->next=s->next;
            s->next=d->next;
            d->next=s;
            d=f;
            f=f->next;
            if(f==NULL) break;
            s=f->next;
        }
        return ans;
    }
};