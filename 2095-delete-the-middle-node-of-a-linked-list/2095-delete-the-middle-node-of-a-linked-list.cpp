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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL || head->next==NULL) return NULL;
        if(head->next->next==NULL){
            head->next=NULL;
            return head;
        }
        ListNode* s=head;
        ListNode* f=head;
        int c=0;
        while(f!=NULL && f->next!=NULL){
            if(s==head){
                s=s->next;
                f=f->next->next;
            }
            else{
                s=s->next;
                f=f->next->next;
                c++;
            }
        }
        ListNode* temp=head;
        while(c!=0){
            temp=temp->next;
            c--;
        }
        temp->next=temp->next->next;
        return head;
    }
};