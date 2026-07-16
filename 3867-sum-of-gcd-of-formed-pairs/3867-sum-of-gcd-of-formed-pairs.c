int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int cmp(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}
long long gcdSum(int* nums, int numsSize) {
    int max = nums[0];
    int *arr = (int*)malloc(numsSize*sizeof(int));
    for(int i=0; i<numsSize; i++){
        if(nums[i]>max) max = nums[i];
        arr[i] = gcd(max,nums[i]);
    }
    qsort(arr, numsSize, sizeof(int), cmp);
    int i=0,j=numsSize-1;
    long long fans=0;
    while(i<j){
        int x= gcd(arr[i], arr[j]);
        fans+=x;
        i++;
        j--;
    }
    return fans;
}