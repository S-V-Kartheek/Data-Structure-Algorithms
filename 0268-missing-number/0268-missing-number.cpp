class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xor1=0,xor2=0;
        int n=nums.size();
        for(int i=0;i<=n;i++){
            xor1^=i;
        }
        for(auto i:nums){
            xor2^=i;
        }
        return xor1^xor2;
    }
};