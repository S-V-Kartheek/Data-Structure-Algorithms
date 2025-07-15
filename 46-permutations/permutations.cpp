class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        int nf=1;
        for(int i=nums.size();i>0;i--){
            nf*=i;
        }
        while(nf--)
        {
             int n=nums.size();
             int ind=-1;

            for(int i=n-2;i>=0;i--)
            {
                if(nums[i]<nums[i+1]){
                    ind=i;
                    break;
                }
            }
            if(ind==-1){
            reverse(nums.begin(),nums.end());
            }else
            {
                for(int i=n-1;i>ind;i--){
                    if(nums[ind]<nums[i]){
                        swap(nums[ind],nums[i]);
                        break;
                    }
                }
            reverse(nums.begin()+ind+1,nums.end());
            }
            res.push_back(nums);
        }
    return res;
    }
};