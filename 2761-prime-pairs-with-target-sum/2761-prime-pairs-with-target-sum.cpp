class Solution {
public:
    vector<int>sieve_of_Eratosthenes(int n){
        vector<int> temp(n,0);
        for(int i=2;i*i<n;i++){
            if(temp[i]==0){
                for(int j=i*i;j<n;j+=i){
                    temp[j]=1;
                }
            }
        }
        vector<int> prime;
        for(int i=2;i<n;i++){
            if(temp[i]==0){
                prime.push_back(i);
            }
        }
        return prime;
    }
    vector<vector<int>> binary_searched(vector<int>&prime,int n){
        vector<vector<int>> ans;
        int i=0;
        int j=prime.size()-1;
        while(i<=j){
            vector<int> t;
            if((prime[i]+prime[j])==n){
                
                ans.push_back({prime[i],prime[j]});
                i++;
                j--;
            }
            else if((prime[i]+prime[j])<n){
                i++;
            }
            else
            j--;
        }
        return ans;
    } 
    vector<vector<int>> findPrimePairs(int n) {
        if(n<=2)
            return {};
        vector<int>v=sieve_of_Eratosthenes(n);
        return  binary_searched(v,n);
    }
};