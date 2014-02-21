class Solution {
public:
    int maxProfit(vector<int> &prices) {
        if(prices.size() <= 0){
            return 0;
        }
        int profit = 0;
        int buyingRate = prices[0];
        for(vector<int>::iterator iter = prices.begin(); iter != prices.end(); ++iter){
            if((*iter) > buyingRate){
                profit += (*iter) - buyingRate;
                buyingRate = (*iter);
            }else{
                buyingRate = (*iter);
            }
        }
        return profit;
    }
};

