class Solution {
public:
    string compareLexico(string str1, string str2) {
        return (str1 > str2) ? str1 : str2;
    }
    bool isSubsequence(string s, string word) {
        int j = 0;
        for (char c : s) {
            if (j < word.length() && c == word[j]) {
                j++;
            }
        }
        return j == word.length();
    }
    string findLongestWord(string s, vector<string>& dictionary) {
        string result = "";
        for (const string& word : dictionary) {
            if (isSubsequence(s, word)) {
                if (word.length() > result.length() || 
                    (word.length() == result.length() && word < result)) {
                    result = word;
                }
            }
        }
        return result;
    }
};