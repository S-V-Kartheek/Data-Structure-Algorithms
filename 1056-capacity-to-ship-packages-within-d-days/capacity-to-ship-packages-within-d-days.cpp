class Solution {
public:
    int calc(vector<int> weights,int capacity){
        int days = 1;   
        int currentLoad = 0;
        for (int weight : weights) {
            if (currentLoad + weight <= capacity) {
                currentLoad += weight;
            } else {
                days++;
                currentLoad = weight;
            }
        }
        return days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int low=INT_MIN,high=0;
        for(int i=0;i<weights.size();i++){
            if(low<weights[i]) low=weights[i];
            high+=weights[i];
        }
       
        while(low<=high){
            int mid=(low+high)/2;
            int daysreq=calc(weights,mid);
            if(daysreq<=days) {
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return low;
    }
};