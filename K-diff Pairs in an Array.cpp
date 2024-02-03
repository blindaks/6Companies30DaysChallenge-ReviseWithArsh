class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        map<int,int>mp;
        for(int x:nums)
        mp[x]++;
        int ans=0;
        for(auto it:mp)
        {
            if(k==0)
            {
                if(it.second>1)
                ans++;
            }
            else
            {
                if(mp.find(it.first+k)!=mp.end())
                ans++;
            }
        }
        return ans;
    }
};
