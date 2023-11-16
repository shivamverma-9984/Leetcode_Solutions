class Solution {
public:
    string findDifferentBinaryString(vector<string>& s) {
        string result;
        for(int i=0;i<s.size();i++){
            char ch=s[i][i];
            if(ch=='0')
                result+="1";
            else
                result+="0";
        }
        return result;
    }
};