class Solution {
    public int minEatingSpeed(int[] piles, int h) {
        int max=0;
        // int sum=0;
         for(int i=0;i<piles.length;i++){
            if(piles[i]>max){
                max=piles[i];
            }
        }

        int low=1,high=max;
        int ans = max;
        while(low<=high){
            int mid=low+(high-low)/2;
            long hours=0;
            for(int i=0;i<piles.length;i++){
                int num=piles[i];
                hours += (num+mid-1)/ mid;
            }

            if(hours<=h){
                ans = mid;
                high = mid-1;
            }else {
                low = mid+1;
            }
        }


    return ans;
    }
}