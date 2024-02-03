class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<pair<int,int>>v;
        for(int i=0;i<nums.size();i++)
        {
            v.push_back({nums[i],i});
        }
        sort(v.begin(),v.end());
        vector<pair<int,int>>vec;
        for(int i=v.size()-k;i<v.size();i++)
        {
            vec.push_back({v[i].second,v[i].first});
        }
        sort(vec.begin(),vec.end());
        vector<int>ans;
        for(auto it:vec)
        {
            ans.push_back(it.second);
        }
        return ans;
    }
};
