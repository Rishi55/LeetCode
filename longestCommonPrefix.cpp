class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0) return "";

        string ans = strs[0], curr;
        int min_len = 0;

        for(int s=1; s<strs.size(); s++) {
            curr = "";
            min_len = min(strs[s].size(), ans.size());

            for(int i=0; i<min_len; i++) {
                if(strs[s][i] == ans[i]) {
                    curr += strs[s][i];
                }
                else break;
            }
            ans = curr;
        }
        return ans;
    }
};
