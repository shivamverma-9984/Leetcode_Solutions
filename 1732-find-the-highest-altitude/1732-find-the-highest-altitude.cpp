class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        for(int i=1;i<gain.size();i++)
        {
            gain[i]+=gain[i-1];
        }
        int maxi=*max_element(gain.begin(),gain.end());
        return  maxi>0?maxi:0;
    }
};