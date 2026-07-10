/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int cmp(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}
struct ListNode* sortList(struct ListNode* head) {
    int *arr = (int*)malloc(50000*sizeof(int));
    struct ListNode *ptr = head;
    int count =0;
    while(ptr!=NULL){
        arr[count]=ptr->val;
        ptr=ptr->next;
        count++;
    }
    qsort(arr, count, sizeof(int), cmp);
    printf("%d", count);
    int i=0;
    ptr = head;
    while(i<count){
        ptr->val = arr[i];
        ptr=ptr->next;
        i++;
    }
    return head;
}