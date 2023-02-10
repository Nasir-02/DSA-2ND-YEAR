
int guess (int num);
class Solution {
public:
    int guessNumber(int n) {
        int first=0;
        int last=n;
        int g=0;
        while (first<=last) {
        int mid =first+(last-first)/2;
        g= guess(mid);
        if (g==0)
        return mid;
        else if (g==-1)
        last=mid-1;
        else 
        first= mid+1;
    }
    return -1;
    }
};
