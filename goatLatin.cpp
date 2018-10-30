class Solution {
public:
    bool isVowel(char c) {
        c = tolower(c);
        return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
    }

    string toGoatLatin(string S) {
        string ans="", curr="", suff = "a";
        string cons="";
        int len = S.length(), firstLet=1;

        for(int i=0; i<len; i++) {
            if (firstLet == 1) {
                firstLet = 0;
                if(!isVowel(S[i])) {
                    cons = S[i];
                    continue;
                }
            }

            if(S[i] == ' ') {
                ans += curr + cons + "ma" + suff + " ";
                cons = "";
                curr = "";
                suff += "a";
                firstLet = 1;
                continue;
            }

            curr += S[i];
        }

        ans += curr + cons + "ma" + suff;

        return ans;
    }
};
