class Solution {
    public int maxProfit(int[] prices) {
        int minprice=Integer.MAX_VALUE;
        int profit=0;
        for(int price : prices){
            if(price<minprice){
                minprice=price;
            }else{
                profit=Math.max(profit, price-minprice);
            }
        }
        return profit;
    }
}