class Solution {
    public boolean lemonadeChange(int[] bills) {
        int fives=0,tens=0;
        for(int bill :bills){
            if(bill==5){
                fives=fives+1;
            }else if(bill==10){
                if(fives>0){
                    tens=tens+1;
                    fives=fives-1;
                }else{
                    return false;
                }
            }else{
                if(fives>0 && tens>0){
                    fives=fives-1;
                    tens=tens-1;
                }else if(fives>=3){
                    fives=fives-3;
                }else{
                    return false;
                }
            }
        }
        return true;
    }
}