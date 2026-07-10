double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int tl = nums1Size+nums2Size;
    double median;
    int a[tl];
    int i=0, j=0, k =0;
    while(i<nums1Size && j<nums2Size){
        if(nums1[i]<nums2[j]){
            a[k]=nums1[i];
            i++;
            k++;
        }
        else {
            a[k]=nums2[j];
            j++;
            k++;
        }
    }
    while(i<nums1Size){
        a[k] = nums1[i];
        i++;
        k++;
    }
    while(j<nums2Size){
        a[k] = nums2[j];
        j++;
        k++;
    }
    
    if(tl%2==0){
        int m=tl/2;
        int n =m+1;
        median = (double)(a[m-1]+a[m])/2;
    }
    else{
        int m=tl/2;
        median = a[m];
    }
    return median;
}