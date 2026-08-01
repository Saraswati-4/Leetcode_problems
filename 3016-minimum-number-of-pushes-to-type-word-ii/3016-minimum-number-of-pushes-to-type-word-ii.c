int cmp(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}
int minimumPushes(char* word) {
    int *freq=(int*)malloc(26*sizeof(int));
    for(int i=0;i<26;i++){
        freq[i]=0;
    }
    int ans=0;
    for(int i=0;word[i]!='\0';i++){
        int x = word[i] - 'a';
        freq[x]++;
    }
    int *arr = (int*)malloc(26*sizeof(int));   
    int n=0;
    for(int i=0;i<26;i++){
        if(freq[i]!=0){ 
            arr[n]=freq[i];
            n++;
        }
    }
    free(freq);
    qsort(arr, n, sizeof(int), cmp);
    int block =n/8, ex=n%8,c=1,k=n-1;
    for(int i=0;i<block;i++){
        for(int j=1;j<9;j++){
            ans = ans+(c*arr[k]);
            k--;
        }
        c++;
    }
    for(int i=0;i<ex;i++){
        ans = ans+(c*arr[k]);
        k--;
    }
    free(arr);
    return ans;
}