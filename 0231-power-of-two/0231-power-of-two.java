class Solution {
    public boolean isPowerOfTwo(int n) {
        if(n<=0) return false;
        StringBuilder sb =new StringBuilder();
        while(n>=1){
            int d=n%2;
            sb.append(d);
            n=n/2;
        }
        int count=0;

        for(int i=0;i<sb.length();i++){
            if(sb.charAt(i)=='1') count++;
        }
       return count==1;
    }
}