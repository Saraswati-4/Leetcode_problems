char* removeStars(char* s) {
    int len = strlen(s);
    char *ans = (char*)malloc(len+1*sizeof(char));
    int i=0,j=0;
    while(s[i]!='\0'){
        if(s[i]!='*'){
            ans[j] = s[i];
            j++;
        }
        else if(s[i]=='*'){
            j--;
        }
        i++;
    }
    ans[j] = '\0';
    return ans;
}