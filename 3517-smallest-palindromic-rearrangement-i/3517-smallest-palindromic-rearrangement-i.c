int compare_chars(const void *a, const void *b) {
    char char_a = *(const char *)a;
    char char_b = *(const char *)b;
    return (char_a - char_b);
}
char* smallestPalindrome(char* s) {
    int n=strlen(s)/2;
    qsort(s, n, sizeof(char), compare_chars);
    int i=0,j=strlen(s)-1;
    for(i,j;i<j;i++,j--){
        s[j]=s[i];
    }
    return s;
}