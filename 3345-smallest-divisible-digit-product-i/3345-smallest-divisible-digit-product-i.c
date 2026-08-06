int smallestNumber(int n, int t) {
    while(true){
        int a = n;
        int s=1;
        while(a>0){
            int rem = a%10;
            s*=rem;
            a/=10;
        }
        if(s%t==0) break;
        n++;
    }
    return n;
}