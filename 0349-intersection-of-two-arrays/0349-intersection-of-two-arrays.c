/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int max =0;
    for(int i=0;i<nums1Size;i++){
        if(nums1[i]>max) max = nums1[i];
    }
    for(int i=0;i<nums2Size;i++){
        if(nums2[i]>max) max = nums2[i];
    }
    int size = nums1Size<nums2Size? nums1Size:nums2Size;
    int *ans = (int*)malloc((size)*sizeof(int));
    int freq1[max+1], freq2[max+1];
    for(int i=0;i<max+1;i++){
        freq1[i]=0;
        freq2[i]=0;
    }
    for(int i=0;i<nums1Size;i++){
        freq1[nums1[i]]++;
    }
    for(int i=0;i<nums2Size;i++){
        freq2[nums2[i]]++;
    }
    int a=0;
    for(int i=0;i<max+1;i++){
        if(freq1[i]!=0 && freq2[i]!=0){
            ans[a] = i;
            a++;
        }
    }
    *returnSize=a;
    return ans;
}