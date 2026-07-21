int maxActiveSectionsAfterTrade(char* s) {
    int n=strlen(s), p0=0,c0=0,t1=0,max=0,i=0;
    while(i<n){
        if(s[i]==0){
            p0++;
            i++;
        }
        else{
            while(i<n && s[i]=='1'){
                t1++;
                i++;
            }
            while(i<n && s[i]=='0'){
                c0++;
                i++;
            }
            if(p0 && c0){
                max= max > p0+c0 ? max : p0+c0;
            }
            printf("%d, ",p0+c0);
            p0 = c0;
            c0=0;
        }
    }
    return t1+max;
}