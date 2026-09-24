int smallestIndex(int* nums, int numsSize) {
    int ans =-1;
    for(int i=0;i<numsSize;i++){
        int sum =0,n=nums[i];
        while(n>0){
            int rem = n%10;
            sum = sum+rem;
            n=n/10;
        }
        if(sum==i){
            if(ans==-1){
                ans=sum;
                break;
            }
        }
    }
    return ans;
}