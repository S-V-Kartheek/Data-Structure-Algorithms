class Solution {
public:
    string reverseWords(string s) {
        string temp = "";
        string ans = "";
        int n = s.length();

        for (int i = 0; i < n; i++) {
            char ch = s[i];
            if (ch != ' ') {
                temp += ch;
            } else if (temp != "") {  // word ended
                if (ans != "") {
                    ans = temp + " " + ans;
                } else {
                    ans = temp;
                }
                temp = "";
            }
        }

        // Add the last word (if any) — same conditional logic as above
        if (temp != "") {
            if (ans != "") ans = temp + " " + ans;
            else ans = temp;
        }

        return ans;
    }
};
