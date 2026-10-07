class Solution {
public:
    vector<string> findWords(vector<string>& s) {
        string first = "qwertyuiop";
        string second = "asdfghjkl";
        string third = "zxcvbnm";

        vector<string> ans;

        for (int i = 0; i < s.size(); i++) {
            bool f = false, se = false, t = false;
            int cnt = 0;

            for (int j = 0; j < s[i].size(); j++) {
                char ch = tolower(s[i][j]);

                if (first.find(ch) != string::npos) {
                    if (!f) {
                        f = true;
                        cnt++;
                    }
                }
                else if (second.find(ch) != string::npos) {
                    if (!se) {
                        se = true;
                        cnt++;
                    }
                }
                else if (third.find(ch) != string::npos) {
                    if (!t) {
                        t = true;
                        cnt++;
                    }
                }
            }

            if (cnt == 1) {
                ans.push_back(s[i]);
            }
        }

        return ans;
    }
};