class Solution {
public:

    int reverse(int x) {
        int ld;
        long r=0;
        while(x!=0){
        r=(r*10)+x%10;
        x=x/10;
        }
        return (r>INT_MIN && r<INT_MAX)? r:0;
    }
};