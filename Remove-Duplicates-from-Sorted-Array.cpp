class Solution {
public:
    int removeDuplicates(int A[], int n) {
        int cnt = 0, i = 0, j = 0;
        while(i < n){
            int curNum = A[i];
            j = i + 1;
            while(j < n && A[j] == A[i]){
                j++;
            }
            if(j >= n){
                return cnt + 1;
            }
            A[++cnt] = A[j];
            i = j;
        }
        return cnt;
    }
};
