class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> mpp;
        int res=-1;
        for(auto i:arr){
            mpp[i]++;
        }
        for(auto i:mpp){
             if(i.first==i.second){
                if(res<i.second){
                    res=i.second;
                };
            }
        }
        return res;
    }
};