class Solution {
public:
    bool checkIfPangram(string s) {
        vector<int>p(26,false);
        int n=s.size();
        for(int i=0;i<s.size();i++)
        {
            p[s[i]-'a']=true;
        }
         for(int i=0;i<26;i++)
         {
            if (p[i]!=true)
                return false;
        }
        return true;
         // set<char>s;
        // for(auto i:sentence)
        // {
        //     s.insert(i);
        // }
        // return s.size()==26;
    }
};