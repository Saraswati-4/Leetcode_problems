int minimumPushes(char* word) {
    int n=strlen(word);
    if(n<=8) return n;
    int c=1,ans=0;
    for(int i=1;i<=n;i++){
        ans+=c;
        if(i%8==0) c++;
    }
    return ans;
}