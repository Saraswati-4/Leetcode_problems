/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int cmp(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}
int* findMissingElements(int* nums, int numsSize, int* returnSize) {
    int *ans = (int*)malloc(100*sizeof(int));
    qsort(nums, numsSize, sizeof(int), cmp);
    int min=nums[0],max=nums[numsSize-1];
    int freq[101] = {0};
    for(int i=0;i<numsSize;i++){
        freq[nums[i]]++;
    }
    int j=0;
    for(int i=min;i<max;i++){
        if(freq[i]==0){
            ans[j] = i;
            j++;
        }
    }
    *returnSize=j;
    return ans;
}