class Solution {
public:
    bool calc(vector<int>& bloomDay, int d,int k,int m){
        int day=0,count=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=d){
                count++;
                if(count==k){
                    day++;
                    count=0;

                }
            }else{
           count=0;
           }
        }
        return day>=m;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        if(1LL*m*k>n) return -1;
        int maxi=*max_element(bloomDay.begin(),bloomDay.end());
        int l=1,h=maxi,ans=maxi;
        while(l<=h){
            int mid=l+(h-l)/2;
            bool res=calc(bloomDay,mid,k,m);
            if(res){
                ans=mid;
                h=mid-1;
            }else{
                l=mid+1;
            }
        }
        return ans;
    }
};