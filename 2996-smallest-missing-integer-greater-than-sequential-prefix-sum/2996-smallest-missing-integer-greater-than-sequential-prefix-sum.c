int missingInteger(int* nums, int numsSize) {
    int x = nums[0];
    int i=1;
    while(i<numsSize && (nums[i]==nums[i-1]+1)){
        x+=nums[i];
        i++;
    }
    int ans = x,fa=0;
    while(fa<numsSize){
        for(i=0;i<numsSize;i++){
            if(nums[i]==ans) {
                ans++;
            }
        }
        fa++;
    }
    return ans;
}