int gcdOfOddEvenSums(int n) {
    int sumodd=0,sumeven =0;   //sumodd = n*n ; sumeven = n(n+1);
    for(int i=1;i<n*2;i++){
        if(i%2==0){
            sumeven+=i;
        }
        else sumodd+=i;;
    }
    printf("%d, %d", sumodd, sumeven);
    if(sumodd==sumeven+1||sumeven==sumodd+1) return n;
    while(sumodd!=sumeven){
        if(sumodd>sumeven) sumodd = sumodd-sumeven;
        else sumeven = sumeven-sumodd;
    }
    return sumodd;
}