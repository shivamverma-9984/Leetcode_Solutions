class Solution {
public:
    int isWinner(vector<int>& player1, vector<int>& player2) {
        int n1=player1.size();
        int n2=player2.size();
        int sum1=0;
        int sum2=0;
        for(int i=0;i<n1;i++)
        {
sum1+=(i>0 && player1[i-1]==10 || i>1 && player1[i-2]==10)?2*player1[i]:player1[i];
sum2+=(i>0 && player2[i-1]==10 || i>1 && player2[i-2]==10)?2*player2[i]:player2[i];

        }
        
        if(sum1>sum2)
            return 1;
        else if(sum2>sum1)
            return 2;
        else
            return 0;
    }
};