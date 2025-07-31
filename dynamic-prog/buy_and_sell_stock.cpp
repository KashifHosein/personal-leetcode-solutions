/*
Choose one day prior to the best buying day. If no profit return 0.
Use an integer variable called max to keep track of the highest profit.
*/

class Solution {
public:
    int maxProfit(vector<int>& prices){
        if(prices.size() < 1 || prices.size() > pow(10, 5))
            return 0;

        if(prices.size() == 1)
            return 0;

    
        int maxProfit = 0;
        int smallestBuyPrice = pow(10, 6);
        
        for(int i = 0; i < prices.size(); i+=1){
                if(prices[i] < 0 || prices[i] > pow(10, 4)){
                    return 0;
                }
                
                if(prices[i] < smallestBuyPrice){
                    smallestBuyPrice = prices[i];
                  
                }

                int currentProfit = prices[i] - smallestBuyPrice;

                if(currentProfit > maxProfit)
                    maxProfit = currentProfit;
           
        }
        return maxProfit;
    }  

};
