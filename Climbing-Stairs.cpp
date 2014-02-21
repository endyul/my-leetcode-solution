class Solution {
public:
    int climbStairs(int n) {
        if(n < 0){
            return -1;
        }

        vector<int> result;
        result.push_back(0);
        result.push_back(1);
        result.push_back(2);

        for(int i = 3; i <= n; ++i){
            result.push_back(result[i-1] + result[i-2]);
        }

        return result[n];
    }
};
