/*
 * 利用异或的性质
 * x^x = 0
 * 0^x = x
 */

class Solution {
public:
    int singleNumber(int A[], int n) {
        int the_single_one = 0;
        for(int i = 0; i < n; ++i){
            the_single_one ^= A[i];
        }
        return the_single_one;
    }
};
