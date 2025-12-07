class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int maxindex=0;
        for(int i=0;i<n;i++){
            if(i>maxindex) return false; // ensure that the i is not greater than max index because it shoulsd satify the max index before moving to the next greater index
            maxindex=max(maxindex,i+nums[i]);
        }
        return true;
    }
};