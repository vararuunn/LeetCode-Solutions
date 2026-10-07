class Solution {
public:
    string sortSentence(string s) {
        stringstream ss(s);
        string word;
        vector<string> ans(9);

        while (ss >> word) {
            int pos = word[word.length() - 1] - '1';
            word.pop_back();
            ans[pos] = word;
        }
        string result = "";
        for (int i = 0; i < 9; i++) {
            if (ans[i] != "") {
                if (result != "")
                    result += " ";

                result += ans[i];
            }
        }
        return result;
    }
};