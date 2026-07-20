long long coloredCells(int n) {
    long long ans=1,a=4;
    for(int i=1;i<n;i++){
        ans+= a;
        a+=4;
    }
    return ans;
}