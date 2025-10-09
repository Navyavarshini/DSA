class Solution {
public:
    string toGoatLatin(string sentence) {
        string ans = "";
        string temp = "";
        string addon = "a";

        for(auto x : sentence){
            if(x == ' '){
                if(temp[0]=='a' || temp[0]=='e' || temp[0]=='i' || temp[0]=='o' || temp[0]=='u' || temp[0]=='A' || temp[0]=='E' || temp[0]=='I' || temp[0]=='O' || temp[0]=='U'){
                    temp += "ma";
                    temp += addon;
                    temp += ' ';
                    ans += temp;
                    temp = "";
                }else{
                    char ch = temp[0];
                    temp.erase(0,1);
                    temp += ch;
                    temp += "ma";
                    temp += addon;
                    temp += ' ';
                    ans += temp;
                    temp = "";
                }
                addon += 'a';
            }else{
                temp += x;
            }
        }
        if(temp[0]=='a' || temp[0]=='e' || temp[0]=='i' || temp[0]=='o' || temp[0]=='u' || temp[0]=='A' || temp[0]=='E' || temp[0]=='I' || temp[0]=='O' || temp[0]=='U'){
            temp += "ma";
            temp += addon;
            ans += temp;
        }else{
            char ch = temp[0];
            temp.erase(0,1);
            temp += ch;
            temp += "ma";
            temp += addon;
            ans += temp;
        }
        return ans;
    }
};