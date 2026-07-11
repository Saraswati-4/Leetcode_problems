void rotate(int* nums, int numsSize, int k) {
    k=k%numsSize;
    if(k==0) return;
    int bp=(numsSize-k);
    int *arr= (int*)malloc((numsSize-bp)*sizeof(int));
    int a=0;
    for(int i=bp;i<numsSize;i++){
        arr[a]=nums[i];
        a++;
    }
    a=numsSize-1;
    for(int i=bp-1;i>=0;i--){
        nums[a]=nums[i];
        a--;
    }
    for(int i=0;i<numsSize-bp;i++){
        nums[i]=arr[i];
    }
    printf("%d", bp);
}