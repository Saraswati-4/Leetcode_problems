int arrangeCoins(int n) {
    long long int x = 1,sum = 0;
    while(sum<n){
        sum = sum+x;
        if(sum>n) break;
        x++;
    }
    return x-1;
}