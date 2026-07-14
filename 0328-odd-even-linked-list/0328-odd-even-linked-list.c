/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* oddEvenList(struct ListNode* head) {
    if(head==NULL||head->next==NULL) return head;
    struct ListNode *odd = (struct ListNode*)malloc(sizeof(struct ListNode));
    odd->val =0;
    struct ListNode *even = (struct ListNode*)malloc(sizeof(struct ListNode));
    even->val =0;
    struct ListNode *oddptr, *evenptr;
    oddptr = odd;
    evenptr = even;
    int i=1;
    while(head!=NULL){
        if(i%2==0){
            evenptr->next = head;
            evenptr = evenptr->next;
        }
        else{
            oddptr->next = head;
            oddptr = oddptr->next;
        }
        head =  head->next;
        i++;
    }
    evenptr->next = NULL;
    oddptr->next = even->next;
    struct ListNode *newh = odd->next;
    free(odd);
    free(even);
    return newh;
}