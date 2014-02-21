/*
 *
 * f(0) = f(1) = 1
 * f(n) = f(0) * f(n-1) + f(1) * f(n-2) + ... + f(n-1) * f(0)
 *
 */
class Solution {
public:
    int numTrees(int n) {
        vector<int> f;
        f.push_back(1);
        f.push_back(1);

        for (int i = 2; i <= n; i++) {
            int cnt = 0;
            for(int j = 0; j <= i-1; j++){
                cnt += f[j] * f[i-1-j];
            }
            f.push_back(cnt);
        }

        return f[n];
    }
};
