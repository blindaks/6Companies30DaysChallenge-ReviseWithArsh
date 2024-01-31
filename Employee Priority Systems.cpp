class Solution {
public:
    vector<string> findHighAccessEmployees(vector<vector<string>>& access_times) {
        vector<pair<string,vector<int>>>v;
        sort(access_times.begin(),access_times.end());
        string s=access_times[0][0];
        vector<int>vec;
        int x=stoi(access_times[0][1]);
        vec.push_back(x);
        for(int i=1;i<access_times.size();i++)
        {
            if(access_times[i][0]==s)
            {
                x=stoi(access_times[i][1]);
                vec.push_back(x);
            }
            else
            {
                v.push_back({s,vec});
                s=access_times[i][0];
                vec.clear();
                x=stoi(access_times[i][1]);
                vec.push_back(x);
            }
        }
        if(vec.size()>0)
        v.push_back({s,vec});
        vector<string>ans;
        for(auto it:v)
        {
            for(int i=2;i<it.second.size();i++)
            {
                if(it.second[i]-it.second[i-2]<100)
                {
                    ans.push_back(it.first);
                    break;
                }
            }
        }
        return ans;
    }
};
