/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode *ptr, *pre,*dummy;
    dummy = (struct ListNode*)malloc(sizeof(struct ListNode));
    dummy->next=head;
    pre=dummy;
    ptr=head;
    while(ptr!=NULL){
        while(ptr->next!=NULL && pre->next->val==ptr->next->val) ptr=ptr->next;
        if(pre->next==ptr) pre=pre->next;
        else pre->next=ptr->next;
        ptr=ptr->next;
    }
    return dummy->next;
}