class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i=0;
        int j=1;
        int profit=0;
        int maxi=0;
        while(j<prices.size())
        {
            profit=prices[j]-prices[i];
            if(profit<0)
            {
                i=j;
            }
            else{
                maxi=max(profit,maxi);
            }
            j++;
        }
        return maxi;

        }
};