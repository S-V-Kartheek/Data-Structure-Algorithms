class Solution {
    public long sumAndMultiply(int n) {
        if(n==0) return 0;
        StringBuilder sb=new StringBuilder();
        long sum=0;
        while(n>0){
            int d=n%10;
            if(d!=0)
            {
            sb.append(d);
            sum+=d;
            }
            n=n/10;
        }
        sb.reverse();
        int res=0;

        for(int i=0;i<sb.length();i++){
            int digit=sb.charAt(i)-'0';
            res=res*10+digit;
        }
        return res*sum;
    }
}