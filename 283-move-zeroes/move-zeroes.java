class Solution {
    public void swap(int[] arr,int i,int j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }

    public void moveZeroes(int[] nums) {
        // int high=0;
        int low=0;
        for(low=0;low<nums.length; low++){
            if(nums[low]==0) {
                break;
            }
        }
        for(int high=low+1; high<nums.length; high++ ){
            if(nums[high]!=0){
                swap(nums,low,high);
                low++;
            }
        }
    }
}