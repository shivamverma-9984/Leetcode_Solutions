class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string> result;
        for(auto i:words)
        {
            string ans="";
            for(auto k:i)
            {
                if(k!=separator)
                {
                    ans+=k;
                }
                else{
                    if(!ans.empty())
                    {
                        result.push_back(ans);
                        ans="";
                    }
                }
            }
            if(!ans.empty())
            {
                 result.push_back(ans);
                    
            }        
        }
        return result;
    }
};