class Solution {
public:
    string addStrings(string num1, string num2) {
        int rem, len, len1 = num1.length(), len2 = num2.length();
        string s, result="";
        char tmp;
        if(len1 < len2) {
            len = num1.length();
            s = num2;
            rem = num2.length();
        } else {
            len = num2.length();
            s = num1;
            rem = num1.length();
        }

        int curr, temp, carry = 0;

        for(int i=0; i<len; i++) {
            curr = (num1[len1-1-i] - '0') + (num2[len2-1-i] - '0') + carry;
            temp = curr%10;
            carry = curr/10;

            tmp = temp + '0';

            result = tmp+result;
        }

        for(int i=rem-len-1; i>=0; i--) {
            curr = (s[i] - '0') + carry;
            temp = curr%10;
            carry = curr/10;

            tmp = temp + '0';
            result = tmp+result;
        }

        if (carry) {
            tmp = carry + '0';
            result = tmp + result;
        }

        return result;
    }
};
