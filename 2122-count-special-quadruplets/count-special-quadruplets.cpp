class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
        unordered_map<int, int> ump;
        int count = 0, n = nums.size();
        for (int c = 2; c < n-1; c++) { // nums[a]+nums[b] == nums[d]-nums[c].
            int b = c - 1;
            for (int a = 0; a < b; a++) {
                ump[nums[a]+nums[b]]++;
            }
            for (int d = c+1; d < n; d++) {
                count += ump[nums[d]-nums[c]];
            }
        }
        return count;
    }
};