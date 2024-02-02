class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        if(s.length()<10)
        return {};
        vector<string>v;
        map<string,int>mp;
        for(int i=0;i<=s.length()-10;i++)
        {
            mp[s.substr(i,10)]++;
        }
        for(auto it:mp)
        {
            if(it.second>1)
            v.push_back(it.first);
        }
        return v;
    }
};
