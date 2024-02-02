class Solution {
public:
    int solve(vector<int>&v, int x, int k)
    {
        int n=v.size();
        if(n==1)
        return v[0];
        x=(x+k)%n;
        v.erase(v.begin()+x);
        return solve(v, x, k);
    }
    int findTheWinner(int n, int k) {
        vector<int>v;
        for(int i=1;i<=n;i++)
        v.push_back(i);
        return solve(v, 0, k-1);
    }
};
