class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0 || ((x!=0) && (x%10 == 0))) return false;
        int end=0;
        while(x>end){
            end = (end*10)+(x%10);
            x = x/10;
        }
        if((x == end) || (end/10 == x)) return true;

        return false;
    }
};
