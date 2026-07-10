/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* rotateRight(struct ListNode* head, int k) {
    if(head==NULL) return NULL;
    if(head->next==NULL ||k==0) return head;
    int i=1;
    struct ListNode *ptr=head;
    while(ptr->next!=NULL){
        ptr=ptr->next;
        i++;
    }
    k=k%i;
    if(k==0) return head;
    printf("%d", k);

    int bp=i-k;
    struct ListNode *cur = head;
    for(int a=0;a<bp-1;a++){
        cur=cur->next;
    }
    struct ListNode *newhead = cur->next;
    cur->next=NULL;
    ptr->next = head;
    return newhead;
}