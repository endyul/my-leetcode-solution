class Solution {
public:
    void merge(int A[], int m, int B[], int n) {
        int p = m + n - 1;
        --m, --n;
        while(m>=0 && n>=0){
            if(A[m] >= B[n]){
                A[p--] = A[m--];
            }else{
                A[p--] = B[n--];
            }
        }
        while(n >= 0){
            A[p--] = B[n--];
        }
    }
};
