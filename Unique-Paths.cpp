class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> map;
        vector<int> tmp;
        
        for(int j = 0; j <= n; ++j){
            tmp.push_back(0);
        }
        
        for(int i = 0; i <= m; ++i){
            map.push_back(tmp);
        }
        
        for(int i = 0; i <= m; ++i){
            map[i][1] = 1;
        }
        
        for(int j = 1; j <= n; ++j){
            map[1][j] = 1;
        }
        
        for(int i = 1; i <= m; ++i){
            for(int j = 1; j <= n; ++j){
                map[i][j] = map[i-1][j] + map[i][j-1];
            }
        }
        
        return map[m][n];
    }
};
