class Solution {
public:
    bool isSet(int &x, int bit){
        return x & (1<<bit);
    }
    bool setBit(int &x, int bit){
        return x|=(1<<bit);
    }
    bool unsetBit(int &x, int bit){
        return x&= ~(1<<bit);
    }
    int minimizeXor(int num1, int num2) {
        int x = num1;
        int requiredBits = __builtin_popcount(num2);
        int currBits = __builtin_popcount(num1);
        int bit = 0;
        if(currBits<requiredBits){
            while(currBits<requiredBits){
                if(!isSet(x,bit)){
                    setBit(x,bit);
                    currBits++;
                }
                bit++;
            }
        }
        else if(currBits > requiredBits){
            while(currBits > requiredBits){
                if(isSet(x,bit)){
                    unsetBit(x,bit);
                    currBits--;
                }
                bit++;
            }
        }
        return x;
    }
};