class Solution {
public:

    int findNextValidInd(vector<vector<int>>& jobs, int ind){
        int left=ind+1;
        int n = jobs.size();
        int right = n-1;
        int res=n;
        while(left<=right){
            int mid = (left+right)/2;
            if(jobs[mid][0]>=jobs[ind][1]){
                right=mid-1;
                res=mid;
            }
            else{
                left=mid+1;
            }
        }
        return res;
    }

    int helper(vector<vector<int>>& jobs, int ind, vector<int>& dp){
        int n = jobs.size();
        if(ind>=n) return 0;
        if(dp[ind]!=-1) return dp[ind];
        int next = findNextValidInd(jobs, ind);
        int take = jobs[ind][2]+helper(jobs, next, dp);
        int not_take = helper(jobs, ind+1, dp);
        return dp[ind]=max(take, not_take);
    }

    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        // sort jobs by starting time in asc order
        int n = startTime.size();
        vector<vector<int>> jobs(n, vector<int>(3, 0));
        for(int i=0; i<n; i++){
            jobs[i][0]=startTime[i];
            jobs[i][1]=endTime[i];
            jobs[i][2]=profit[i];
        }
        auto comp = [&](auto& vec1, auto& vec2) {
              return vec1[0] <= vec2[0];
        };
        sort(begin(jobs), end(jobs), comp);
        vector<int> dp(n, -1);
        int res=helper(jobs, 0, dp);
        return res;
    }
};