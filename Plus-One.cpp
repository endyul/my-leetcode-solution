class Solution {
public:
    vector<int> plusOne(vector<int> &digits) {
        vector<int> ans, revAns;
        int carry = 1;
        for(int i = digits.size() - 1; i >= 0; --i){
            int sum = digits[i] + carry;
            if(sum >= 10){
                sum -= 10;
                carry = 1;
            }else{
                carry = 0;
            }
            
            revAns.push_back(sum);
        }
        if(carry == 1){
            revAns.push_back(1);
        }
        for(int i = revAns.size() - 1; i >= 0; --i){
            ans.push_back(revAns[i]);
        }
        return ans;
    }
};
