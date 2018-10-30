class Solution {
public:
    int reverse(int x) {
        long result = 0, sign = 1;
        if(x<0) {
            x = -x;
            sign = -1;
        }
        while (x>0){
            result = (result*10) + (x%10);
            x=x/10;
            if(result > INT_MAX) return 0;
        }
        return sign * result;
    }
};
