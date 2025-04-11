class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count = 0;
        for(int nums = low;nums<=high;nums++){
            if(nums>10 && nums<100 && nums%11==0){
                count++;
            }
            else if(nums>1000 && nums<10000){
                int firstDigit = nums/1000 ;
                int secondDigit = (nums%1000)/100;
                int thirdDigit = (nums/10)%10;
                int forthDigit = nums%10;
                if(firstDigit + secondDigit == thirdDigit + forthDigit){
                    count++;
                }
            }
        }
        return count;
    }
};