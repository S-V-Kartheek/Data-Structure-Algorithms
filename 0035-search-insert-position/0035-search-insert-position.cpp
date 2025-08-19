class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1,ans=r+1;
        while(l<=r){
            int m=(l+r)/2;
            
            if(nums[m]>=target){
                ans=m;
                r=m-1;
            }else{
                l=m+1;
            }
           
        }
         return ans;
    }
};