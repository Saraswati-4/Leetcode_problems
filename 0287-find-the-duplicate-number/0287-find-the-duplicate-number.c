int findDuplicate(int* nums, int numsSize) {
    int freq[numsSize];
    for(int j=0;j<numsSize;j++){
        freq[j]=0;
    }
    int i=0;
    for(i;i<numsSize;i++){
        freq[nums[i]]++;
        if(freq[nums[i]]>1) break;
    }
    return nums[i];
}