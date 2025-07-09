class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //mOORES VOTING ALGORITHM 
        int ele,cnt=0;
        for(auto  i:nums){
            if(cnt==0){
                ele=i;
                cnt++;
            }else if(i==ele){
                cnt++;
            }else{
                cnt--;
            }
        }
        return ele;
    }
};