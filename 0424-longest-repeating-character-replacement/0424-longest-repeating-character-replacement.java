class Solution {
    public int characterReplacement(String s, int k) {
        int Occurance[] = new int[26];
        int left=0;
        int ans=0;
        int maxOccurance=0;

        for(int right=0; right< s.length(); right++) {
            maxOccurance = Math.max(maxOccurance, ++Occurance[s.charAt(right) - 'A']);
            if(right-left+1 - maxOccurance > k){
                Occurance[s.charAt(left) - 'A']--;
                left++;
            }
            ans= Math.max(ans,right-left+1);
        }
    return ans;
    }
}