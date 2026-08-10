/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int cmp(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}
int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    qsort(nums1, nums1Size, sizeof(int), cmp);
    qsort(nums2, nums2Size, sizeof(int), cmp);
    int size = nums1Size<nums2Size?nums1Size:nums2Size;
    int *ans = (int*)malloc(size*sizeof(int));
    int i=0,j=0,a=0;
    while(i<nums1Size && j<nums2Size){
        if(nums1[i]==nums2[j]){
            printf("%d,", nums1[i]);
            ans[a] = nums1[i];
            a++;
            i++;j++;
        }
        else if(nums1[i]<nums2[j]) i++;
        else j++;
    }
    *returnSize =a;
    return ans;
}