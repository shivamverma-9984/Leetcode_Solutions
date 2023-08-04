class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
   vector<vector<int>> ret;

        int left,right = 0;
        int cnt = 0;


        for (int i = 0; i < s.length() -1 ; i++)
        {
            left = i;

            while (s[i] == s[i+1])
            {
                cnt++;
                i++;
            }

            if (cnt >= 2)
            {
                
                right = i;

                ret.push_back({left,right});

                left = 0;
                right = 0;
            }
            
            cnt = 0;

        }
        

        return ret;
    }
};