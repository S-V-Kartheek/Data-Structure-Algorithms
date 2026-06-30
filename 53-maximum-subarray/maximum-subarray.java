class Solution {
    public int maxSubArray(int[] nums) {
        int msum=nums[0],sum=0;
        for(int i=0;i<nums.length;i++){
            if(sum<0){
                sum=0;
            }
            sum+=nums[i];
            msum=Math.max(msum,sum);
        }
        return msum;
        
    }
}