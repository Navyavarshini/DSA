class Solution {
public:
    string digitSum(string s, int k) {
        while(s.size() > k){
            string temp = "";
            int sum = s[0]-'0', i;
            for(i = 1; i<s.size(); i++){
                if(i%k == 0){
                    temp += to_string(sum);
                    sum = 0;
                }
                sum += s[i]-'0';
            }
            
            temp += to_string(sum);
            
            s = temp;
        }
        return s;
    }
};