class Solution {
public:
    bool countfun(vector<int>& nums,int k,long long limit){
        int count=1;long long curr=0;
        for(int i=0;i<nums.size();i++){
            if(curr+nums[i] <= limit){
                curr+=nums[i];
            }else{
                count++;
                curr=nums[i];
            }  
        }
       return count <= k;
    }

    int splitArray(vector<int>& nums, int k) {
        long long low=*max_element(nums.begin(),nums.end());
        long long high=accumulate(nums.begin(),nums.end(),0LL);
        while(low<=high){
            long long mid=low+(high-low)/2;
            if(countfun(nums,k,mid)){
                high=mid-1;
            }else{
                low=mid+1;
            }

        }return low;
    }
};