class Solution {
public:
    
    string sortVowels(string s) {
        string t="",vow="";
        int n=s.size(),i=0;
        for(char x:s)
        {
            if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U')
                vow+=x;
        }
        sort(vow.begin(),vow.end());
        for(char x:s)
        {
            if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U')
                t+=vow[i++];
            else
                t+=x;
        }
        return t;
    }
};