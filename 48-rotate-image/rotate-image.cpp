class Solution {
public:
    void rotate(vector<vector<int>>& m) {
        // seen
        int r=m.size();
        int c=m[0].size();
        for (int i=0 ; i<r ; i++) {
            for (int j=i ; j<c ; j++) {
               swap(m[i][j],m[j][i]);
            }
        }

        for (int i=0 ; i<r ; i++) {
            reverse(m[i].begin(),m[i].end());
        }
    }
};