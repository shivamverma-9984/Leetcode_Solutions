class Solution {
public:
    bool isvowel(char ch)
    {
        ch=tolower(ch);
        return (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u');
    }
    string sortVowels(string s) {
        string temp;
        for(auto ch:s)
        {
            if(isvowel(ch))
            {
                temp+=ch;
            }
        }
        sort(begin(temp),end(temp));
        int j=0;
        for(int i=0;i<s.size();i++){
            if(isvowel(s[i]))
            {
                s[i]=temp[j];
                j++;
            }
        }
        return s;
    }
};