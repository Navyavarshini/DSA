class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        int n = nums1.size();
        int m = nums2.size();
        
        vector<int> ptr(n, 0);
        
        priority_queue<pair<int,int>, 
                       vector<pair<int,int>>, 
                       greater<pair<int,int>>> pq;
        
        // Optimization: only push min(n, k)
        for(int i = 0; i < min(n, k); i++){
            pq.push({nums1[i] + nums2[0], i});
        }
        
        vector<vector<int>> ans;
        
        while(k-- && !pq.empty()){
            auto [sum, i] = pq.top();
            pq.pop();
            
            ans.push_back({nums1[i], nums2[ptr[i]]});
            
            ptr[i]++;
            
            if(ptr[i] < m){
                pq.push({nums1[i] + nums2[ptr[i]], i});
            }
        }
        
        return ans;
    }
};