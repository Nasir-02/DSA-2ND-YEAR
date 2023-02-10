class Solution {
public:
    int arrangeCoins(int n) {
        int s=0;
        int k=n;
        for(int i=1; i<=n; i++ ){
            if(k<=s){
                break;
            }
            else{
                s=s+1;
            }
            k=k-i;
        }
        return s;
        
    }
};
