class Solution {
public:
    const int mod=1e9+7;
    string tobinary(int n){
        string ans="";
        while(n){
            int bit=n%2;
            ans.push_back('0'+bit);
            n/=2;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
    vector<int> productQueries(int n, vector<vector<int>>& queries) {
        string binary=tobinary(n);
        vector<int>powers;
        int power=0;
        for(int i=binary.size()-1;i>=0;i--){
            if(binary[i]=='1'){
                powers.push_back(1<<power);
            }
            power++;
        }
        vector<int>ans;
        for(vector<int>query:queries){
            int left=query[0];
            int right=query[1];
            long long product=1;
            for(int i=left;i<=right;i++){
                product=(product*powers[i])%mod;
            }
            ans.push_back(product%mod);
        }
        return ans;
    }
};