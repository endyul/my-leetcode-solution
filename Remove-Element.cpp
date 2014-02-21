class Solution {
public:
    int removeElement(int A[], int n, int elem) {
        int cnt = 0;
        for (int i = n-1; i >= 0; i--) {
            if(A[i] == elem){
                A[i] = A[n-1-cnt];
                cnt++;
            }
        }

        return n - cnt;
    }
};
