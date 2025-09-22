#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // returns total hours required at speed `speed`, but stops early if > limit
    long long calcHours(const vector<int>& piles, long long speed, long long limit) {
        long long hours = 0;
        for (int pile : piles) {
            hours += ( (long long)pile + speed - 1 ) / speed; // integer ceil
            if (hours > limit) return hours; // early exit
        }
        return hours;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        long long low = 1;
        long long high = *max_element(piles.begin(), piles.end());
        long long ans = high;

        while (low <= high) {
            long long mid = low + (high - low) / 2;
            long long hrs = calcHours(piles, mid, h);

            if (hrs > h) {
                low = mid + 1; // need faster speed
            } else {
                ans = mid;     // mid works, try smaller
                high = mid - 1;
            }
        }
        return (int)ans;
    }
};
