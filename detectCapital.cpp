class Solution {
public:
    bool detectCapitalUse(string word) {
        int len = word.length();
        char c = word[0];

        //Started with Small
        if(c > 96) {
            for(int i=1; i<len; i++){
                //Encountered Capital
                if(word[i] < 97) return false;
            }
        }
        //Started with capital
        else {
            char c2 = word[1];
            //Second is also capital
            if(word[1] < 97) {
                for(int i=2; i<len; i++) {
                    if(word[i] > 96) return false;
                }
            }
            else {
                for(int i=2; i<len; i++) {
                    if(word[i] < 97) return false;
                }
            }
        }
        return true;
    }
};
