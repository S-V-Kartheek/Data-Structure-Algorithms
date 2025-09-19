class Solution {
public:
    bool isPalindrome(int x) {
        long r=0;
        int temp=x;
        while(x>0)
        {
            r=(r*10)+x%10;
            x/=10;
        }
        return (r==temp)?true:false;
    }
};