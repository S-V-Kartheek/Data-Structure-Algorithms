class Solution {
    public int findContentChildren(int[] g, int[] s) {
        int m=g.length,n=s.length,x=0,y=0,count=0;
        Arrays.sort(g);
        Arrays.sort(s);
        while(x<m && y<n){
            if(g[x]<=s[y]){
                x++;
            }
            y++;
        }
        return x;
    }
}