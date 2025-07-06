class Solution {
public:
    int lengthOfLongestSubstring(string s) {

       int l=0,n=s.length();
       int count=0;
       set<int> sett;
       for(int r=0;r<n;r++){
        while(sett.count(s[r])){
            sett.erase(s[l]);
            l++;
        }
        sett.insert(s[r]);
        int m=(r-l)+1;
        count=max(count,m);
       } 
       return count;
    }
};