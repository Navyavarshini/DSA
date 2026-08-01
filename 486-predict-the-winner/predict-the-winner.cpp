class Solution {
public:
    // DP to store (l, r) pairs
    vector<vector<int>> dp;

    int solve(vector<int>& nums, int l, int r) {
        if (l == r)
            return nums[l];

        if (dp[l][r] != -1)
            return dp[l][r];

        int pickLeft = nums[l] - solve(nums, l + 1, r);
        int pickRight = nums[r] - solve(nums, l, r - 1);

        return dp[l][r] = max(pickLeft, pickRight);
    }

    bool predictTheWinner(vector<int>& nums) {
        int n = nums.size();
        dp.assign(n, vector<int>(n, -1));

        return solve(nums, 0, n - 1) >= 0;
    }
};