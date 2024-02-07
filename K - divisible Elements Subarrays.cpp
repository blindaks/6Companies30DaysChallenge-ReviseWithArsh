class Solution {
public:
    int countDistinct(vector<int>& nums, int k, int p) {
        int ans=0;
        set<vector<int>>st;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int c=0;vector<int>v;
            for(int j=i;j<n;j++)
            {
                if(nums[j]%p==0)
                c++;
                if(c>k)
                break;
                else
                {
                    v.push_back(nums[j]);
                    st.insert(v);
                }
            }
        }
        return st.size();
    }
};
