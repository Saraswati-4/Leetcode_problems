long long sumAndMultiply(int n) {
    long int i=0,sum=0,num=0;
    long long ans;
    while(n>0){
        int rem =n%10;
        sum+=rem;
        if(rem!=0){
            num=num+(rem*pow(10,i));
            i++;
        }
        n/=10;
    }
    ans = num*sum;
    return ans;
    
}