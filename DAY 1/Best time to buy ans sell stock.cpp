class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int mini = prices[0] ;
       int diff = 0;
       for(int i=0;i<prices.size(); i++){
           diff = max(diff,prices[i] - mini);
           mini = min(mini,prices[i]);

       }
   
     return diff;
    }
};