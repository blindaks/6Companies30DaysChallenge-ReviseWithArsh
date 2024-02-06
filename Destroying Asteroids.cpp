class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        long long int x=mass;
        sort(asteroids.begin(),asteroids.end());
        for(int i:asteroids)
        {
            if(x>=i)
            x+=i;
            else
            return false;
        }
        return true;
    }
};
