int findGCD(int* nums, int numsSize) {
    int mn =nums[0], mx=nums[0];
    for(int i=1;i<numsSize;i++){
        if(nums[i]<mn) mn = nums[i];
        if(nums[i]>mx) mx=nums[i];
    }
    int ans;
    for(int i=1;i<=mn;i++){
        if(mn%i==0 && mx%i==0) ans=i;
    }
    return ans;
}