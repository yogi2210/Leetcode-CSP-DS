You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

 

Example 1:

Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.

class Solution {
public:
    int maxProfit(vector<int>& prices) {
     int maximum = 0;
     int minimum = prices[0];
     for(int i = 0; i < prices.size(); i++){
         minimum = min(minimum, prices[i]);
         maximum = max(maximum, prices[i]-minimum);
     }
     return maximum;   
    }
};

// this code exceeds the time limit

class Solution {
public:
    int maxProfit(vector<int>& prices) {
     int max_so_far = 0;
     int currMax = 0;
     int n = prices.size();
     for(int i = 0; i < n-1; i++ ){
         for(int j = i+1; j < n; j++){
             currMax = prices[j] - prices[i];
             if(currMax > max_so_far){
                 max_so_far = currMax;
             }
         }
     }
     return max_so_far;   
    }
};