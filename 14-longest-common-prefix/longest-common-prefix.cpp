class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        sort(strs.begin(), strs.end());
        string str1 = strs[0];
        string str2 = strs[strs.size()-1];

        int minLength = min(str1.size(),str2.size());
        for(int i=0; i < minLength; i++){
            if(str1[i] != str2[i]){
                return str1.substr(0, i);
            }
        }
        return str1.substr(0, minLength);

    }
};