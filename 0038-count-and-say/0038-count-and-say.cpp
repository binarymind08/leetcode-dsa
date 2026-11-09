
class Solution {
public:
    string countAndSay(int n) {
        string res = "1";
        for (int i = 1; i < n; i++) {
            string next = "";
            int j = 0;
            while (j < res.size()) {
                char c = res[j];
                int cnt = 0;
                while (j < res.size() && res[j] == c) {
                    j++; cnt++;
                }
                next += to_string(cnt) + c;
            }
            res = next;
        }
        return res;
    }
};
