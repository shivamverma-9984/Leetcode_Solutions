class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int cnt=0;
        for(int i=0;i<words.size();i++)
        {
            reverse(words[i].begin(),words[i].end());
            for(int j=i+1;j<words.size();j++)
            {
                if(words[i]==words[j]){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};