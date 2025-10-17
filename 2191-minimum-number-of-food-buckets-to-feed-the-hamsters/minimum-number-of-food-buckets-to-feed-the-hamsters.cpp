class Solution {
public:
    int minimumBuckets(string s) {
         const int n = s.length();
        int buckets = 0;
        for (int i = 0; i < n; ++i) {
            if (s[i] != 'H') continue;
            if (i && s[i - 1] == 'B') continue;
            if (i + 1 < n && s[i + 1] == '.') s[i + 1] = 'B';
            else if (i && s[i - 1] == '.');
            else return -1;
            ++buckets;
        }
        return buckets;
    }
};