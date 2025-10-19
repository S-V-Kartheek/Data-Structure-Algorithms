class Solution {
public:
    bool isValidSplit(vector<int>& nums,int k,long long limit){
        int count=1;long long curr=0;
        for(int num:nums){
            if(curr + num <= limit){
                curr+=num;
            }else{
                count++;
                curr=num;
            }  
        }
       return count <= k;
    }

    int splitArray(vector<int>& nums, int k) {
        long long low=*max_element(nums.begin(),nums.end());
        long long high=accumulate(nums.begin(),nums.end(),0LL);
        while(low<=high){
            long long mid=low+(high-low)/2;
            if(isValidSplit(nums,k,mid)){
                high = mid-1;
            } else {
                low = mid+1;
            }
        }return low;
    }
};