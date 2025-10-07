class Solution {
public:
    int scoreOfString(string s) {
         int score=0;
        int i=0;
        while(i<s.size()-1)
        {
            score+=abs(s[i]-s[i+1]);
            i++;
        }
        return score;
    }
};