class Solution {
public:
    void solve(vector<vector<int>>& ans, int c, vector<int>v, int k, int i)
    {
        if(i>9)
        {
            if(c==k)
            {
                ans.push_back(v);
            }
            return;
        }
        else if(c>k)
        return;
        solve(ans, c, v, k, i+1);
        v.push_back(i);
        solve(ans, c+1, v, k, i+1);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>v;
        solve(ans, 0, v, k, 1);
        vector<vector<int>>vec;
        for(auto i:ans)
        {
            int s=0;
            for(int x:i)
            s+=x;
            if(s==n)
            vec.push_back(i);
        }
        return vec;
    }
};
