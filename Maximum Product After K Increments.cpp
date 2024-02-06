class Solution {
public:
    long long mod=1e9+7;
    int maximumProduct(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i:nums)
        pq.push(i);
        while(k--)
        {
            int x=pq.top();
            pq.pop();
            x++;
            pq.push(x);
        }
        long long prod=1;
        while(!pq.empty())
        {
            prod*=pq.top();
            prod=prod%mod;
            pq.pop();
        }
        return prod;
    }
};
