class Solution {
    public void swap(int[] nums, int low,int high){
        int temp=nums[low];
        nums[low]=nums[high];
        nums[high]=temp;
    }

    public void sortColors(int[] nums) {
        int low=0,mid=0,high=nums.length-1;
            while(mid<=high){
                if(nums[mid]==0){
                    swap(nums,low,mid);
                    mid++;
                    low++;
                }else if(nums[mid]==1){
                    mid++;
                }else{
                    swap(nums,mid,high);
                    // mid++;
                    high--;
                }
            

            }
        
    }
}