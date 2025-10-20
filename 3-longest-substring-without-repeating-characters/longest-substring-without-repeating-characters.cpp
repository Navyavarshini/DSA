class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        vector<int> hash(256, -1); // ✅ initialize all to -1
        
        int i = 0, j = 0, maxlen = 0;

        while (j < n) {
            if (hash[s[j]] != -1) {
               
                i = max(hash[s[j]] + 1, i);
            }
            int len = j - i + 1;
            maxlen = max(len, maxlen);
            hash[s[j]] = j;
            j++;
        }
        return maxlen;
    }
};
