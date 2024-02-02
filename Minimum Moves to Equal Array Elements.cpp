class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=0;
        int x=nums.size()/2;
        for(int i:nums)
        {
            ans+=abs(i-nums[x]);
        }
        return ans;
    }
};
