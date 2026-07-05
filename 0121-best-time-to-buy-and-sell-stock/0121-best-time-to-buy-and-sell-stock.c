int maxProfit(int* prices, int pricesSize) {
    int i=1;
    int minprice = prices[0], maxprofit=0;
    for(i;i<pricesSize;i++){
        if(prices[i]<minprice) minprice=prices[i];
        maxprofit = fmax(maxprofit, prices[i]-minprice);
    }
    return maxprofit;
}