class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<int>se;
        int n = s.length();
        if(n==0)
            return 0;
        int left = 0, right = 0,result=INT_MIN;
        while(right<n)
        {
            if(se.find(s[right])==se.end())
            {
                se.insert(s[right]);
                result=max(result,right-left+1);
                right++;
            }
            else{
                
                se.erase(s[left]);
                left++;
            }
        }
        return result;
    }
};