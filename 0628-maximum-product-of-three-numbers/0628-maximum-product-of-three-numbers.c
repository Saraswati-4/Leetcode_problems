int cmp(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}
int maximumProduct(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), cmp);
    int i=numsSize-1;
    return nums[i]*nums[i-1]*nums[i-2]>nums[0]*nums[1]*nums[i]?nums[i]*nums[i-1]*nums[i-2]:nums[0]*nums[1]*nums[i];
}