class Solution {
public:
    vector<int> smallestTrimmedNumbers(vector<string>& nums, vector<vector<int>>& queries) {
        vector<int>ans;
        int n=nums[0].length();
        int q=queries.size();
        for(auto it:queries)
        {
            vector<pair<string,int>>v;
            int k=it[0];
            int x=it[1];
            x=n-x;
            int i=0;
            for(auto str:nums)
            {
                v.push_back({str.substr(x),i});
                i++;
            }
            sort(v.begin(),v.end());
            ans.push_back(v[k-1].second);
        }
        return ans;
    }
};
