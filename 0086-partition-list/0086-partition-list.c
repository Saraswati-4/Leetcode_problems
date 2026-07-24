/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* partition(struct ListNode* head, int x) {
    if(head==NULL || head->next==NULL) return head;
    struct ListNode *sm,*lr,*sptr,*lptr;
    sm=(struct ListNode*)malloc(sizeof(struct ListNode));
    lr=(struct ListNode*)malloc(sizeof(struct ListNode));
    sptr=sm;
    lptr=lr;
    while(head!=NULL){
        if(head->val<x){
            sm->next = head;
            sm=sm->next;
        }
        else{
            lr->next=head;
            lr=lr->next;
        }
        head=head->next;
    }
    lr->next=NULL;
    sm->next=lptr->next;
    return sptr->next;

}