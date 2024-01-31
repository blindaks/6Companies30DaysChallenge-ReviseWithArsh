class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        int x,y;
        vector<int>v(n+1);
        for(int i=0;i<n+1;i++)
        {
            v.push_back(0);
        }
        for(int i:arr)
        v[i]++;
        for(int i=1;i<n+1;i++)
        {
            if(v[i]==2)
            x=i;
            if(v[i]==0)
            y=i;
        }
        return {x,y};
    }
};
