class Solution {
public:
    int maximumGroups(vector<int>& grades) {
        int n = grades.size();
        int y = 8*n;
        int x = (sqrt(1+y) - 1)/2;
        return x;
    }
};