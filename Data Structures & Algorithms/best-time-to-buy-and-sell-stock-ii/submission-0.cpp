class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = 0, sell = 0;
        int profit = 0;

        for(int i = 1; i < prices.size(); i++){
            if(prices[i] >= prices[i - 1]){
                sell++;
            }
            else{
                cout << sell << ", " << buy << ", " << i << endl;
                profit += prices[sell] - prices[buy];
                buy = i;
                sell = i;
            }
        }
        profit += prices[sell] - prices[buy];

        return profit;
    }
};