class Solution {
public:
    int pivotInteger(int n) {
        vector<int> vec;
        for(int i=1;i<=n;i++)
        {
            vec.push_back(i);
        }
        vector<int> lsum(vec.size());
        vector<int> rsum(vec.size());

        lsum[0]=vec[0];
        rsum[rsum.size()-1]=vec[vec.size()-1];

        for(int i=1;i<lsum.size();i++)
        {
            lsum[i]=vec[i]+lsum[i-1];
        }
        for(int i=rsum.size()-2;i>=0;i--)
        {
            rsum[i]=vec[i]+rsum[i+1];
        }
    
        for(int i=0;i<vec.size();i++)
        {
            if(lsum[i]==rsum[i])
            {
                return i+1;
            }
        }

        
        return -1;;
    }
};