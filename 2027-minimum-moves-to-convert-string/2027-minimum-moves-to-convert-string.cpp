class Solution {
public:
    int minimumMoves(string s) {
        queue<char>q;
        int result=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='X'|| !q.empty())
            {
                q.push(s[i]);
            }
            if(q.size()==3)
            {
                result++;
                q=queue<char>();
            }
        }
        if (!q.empty())
            result++;
        return result;
    }
};