class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c=0,maxi=0;
        for(auto i:nums){
            if(i==1){
                c++;
            }
            else
            { c=0;}
            maxi=max(c,maxi);
        }
        return maxi;
    }
};