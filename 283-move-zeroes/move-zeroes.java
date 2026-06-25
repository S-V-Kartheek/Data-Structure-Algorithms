class Solution {
    public void Swap(int[] arr,int i,int j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    public void moveZeroes(int[] nums) {
        int j,n=nums.length;
        for(j=0; j<n;j++){
            if(nums[j]==0){
                break;
            }
        }
        for(int i=j+1; i<n; i++){
            if(nums[i]!=0){
                Swap(nums,i,j);
                j++;
            }
        }
    }
}