/*
 * todo 溢出处理
 *
 */
class Solution {
public:
    int reverse(int x) {
        bool isNegative = false;
        int reversedNum = 0;
        if(x < 0){
            isNegative = true;
            x = -x;
        }
        while(x){
            reversedNum = reversedNum * 10 + (x % 10);
            x /= 10;
        }
        if(isNegative){
            reversedNum = -reversedNum;
        }
        return reversedNum;
    }
};
