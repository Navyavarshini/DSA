class Solution {
public:
    int getLeastFrequentDigit(int n) {
        int rem = 0;
        unordered_map<int, int> freq{};
        while(n > 0)
        {
            rem = n%10;
            freq[rem]++;
            n /= 10;
        }
        int mnfreq = INT_MAX;
        for(auto p : freq)
            mnfreq = min(mnfreq, p.second);
        int ans = INT_MAX;
        for(auto p : freq)
            if(p.second == mnfreq)
                ans = min(ans, p.first);
        return ans;
    }
};