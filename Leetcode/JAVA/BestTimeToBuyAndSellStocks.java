/*
Given an array prices where prices[i] is the price of a given stock on the ith day.
We need to maximize our profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
Return the maximum profit that we can achieve from this transaction. If no profit can be achieved then return 0.

Example 1:
Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.

Example 2:
Input: prices = [7,6,4,3,1]
Output: 0
Explanation: In this case, no transactions are done and the max profit = 0.

Constraints:
1 <= prices.length <= 10^5
0 <= prices[i] <= 10^4
 */

// Implement Kadane's Algorithm
public class BestTimeToBuyAndSellStocks {
    public static void main(String[] args) {
        int[] prices = new int[]{3,5,6,1,9,3,2,1};
        int profit = maxProfit(prices);
        System.out.println("The max profit earned by buying and selling stocks is: Rs"+profit);
    }
    private static int maxProfit(int[] prices) {
        int max=0;
        int maxSum=0;
        for(int i=0; i<prices.length-1; i++){
            maxSum+=prices[i+1]-prices[i];
            if(max<maxSum)
                max=maxSum;
            if(maxSum<0)
                maxSum=0;
        }
        return max;
    }
}
