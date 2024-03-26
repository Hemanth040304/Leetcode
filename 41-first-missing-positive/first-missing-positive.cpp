class Solution {
public:
    int firstMissingPositive(vector<int>& A) {
        ios_base::sync_with_stdio(0);
        cin.tie(NULL);
        cout.tie(NULL);

        int n = A.size();
        for(int i = 0; i < n; ++ i){
            while(A[i] > 0 && A[i] <= n && A[A[i] - 1] != A[i]){
                swap(A[i], A[A[i] - 1]);
            }
        }
        for(int i = 0; i < n; ++ i){
            if(A[i] != i + 1)return i + 1;
        }
        return n + 1;
    }
};