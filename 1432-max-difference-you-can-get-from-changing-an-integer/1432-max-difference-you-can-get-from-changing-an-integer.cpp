class Solution {
public:
    int maxDiff(int num) {
        string str = to_string(num);
        string maxStr;
        char ch1;
        // pehla non-9 character ka index dhundho
        for (int i = 0; i < str.length(); i++) {
            if (str[i] != '9') {
                ch1 = str[i];
                break;
            }
        }
        // us index ko change karke sab maxStr me daal do
        for (int i = 0; i < str.length(); i++) {
            if (str[i] == ch1) {
                maxStr += '9';
            } else {
                maxStr += str[i];
            }
        }
        string minStr;
        char ch2;
        // sab pehle index ke one hone or na hone ka khel ha 
        if (str[0] != '1') {
            ch2 = str[0];
            for (int i = 0; i < str.length(); i++) {
                if (str[i] == ch2)
                    minStr += '1';
                else
                    minStr += str[i];
            }
        } else {
            for (int i = 1; i < str.length(); i++) {
                if (str[i] != '0' && str[i] != '1') {
                    ch2 = str[i];
                    break;
                }
            }
            for (int i = 0; i < str.length(); i++) {
                if (str[i] == ch2)
                    minStr += '0';
                else
                    minStr += str[i];
            }
        }

        // bas ab to halwa ha
        int maxNum = stoi(maxStr);
        int minNum = stoi(minStr);
        return maxNum - minNum;
    }
};