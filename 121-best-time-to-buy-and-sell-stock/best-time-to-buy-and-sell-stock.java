class Solution {
    public int maxProfit(int[] arr) {
        int buy=arr[0];
        int profit=0;
        for(int i=1;i < arr.length;i++){
                buy=Math.min(buy,arr[i]);
                profit=Math.max(profit,arr[i]-buy);
        }
        return profit;
    }
}