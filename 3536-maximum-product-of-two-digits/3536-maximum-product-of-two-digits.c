int cmp(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}
int maxProduct(int n) {
    int *arr = (int*)malloc(sizeof(int)*10);
    int i=0;
    int a=n;
    while(a>0){
        int rem=a%10;
        arr[i] =rem;
        a=a/10;
        i++;
    }
    qsort(arr, i, sizeof(int), cmp);
    int ans=arr[i-1]*arr[i-2];
    free(arr);
    return ans;
}