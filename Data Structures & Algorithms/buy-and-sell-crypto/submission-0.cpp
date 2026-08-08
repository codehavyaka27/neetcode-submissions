class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi=0;
        for(int i=0;i<prices.size();i++){
            for(int j=i+1;j<prices.size();j++){
                if(prices[i]>prices[j])continue;
                else{
                    int profit=prices[j]-prices[i];
                    maxi=max(maxi,profit);
                }
            }
        }
        return maxi;
        
    }
};

//a bruteforce approach would be using nested for loops
