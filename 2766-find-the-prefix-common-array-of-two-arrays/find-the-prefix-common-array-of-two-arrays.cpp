class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int> ans(A.size()), cnt(A.size(), 0);
        int cn = 0;
        for (int i = 0; i < A.size(); i++) {
            if (A[i] == B[i])
                cn++;
            else {
                if (cnt[A[i] - 1])
                    cn++;
                if (cnt[B[i] - 1])
                    cn++;
                cnt[A[i] - 1]++, cnt[B[i] - 1]++;
            }
            ans[i] = cn;
        }
        return ans;
    }
};