int maxProfit(int* prices, int pricesSize) {
    int profit = 0;
    int start = prices[0];
    for(int i = 1;i<pricesSize; i++){
        if(start < prices[i]){
            profit += prices[i] - start;
        }
        start = prices[i];
    }
    return profit;
}