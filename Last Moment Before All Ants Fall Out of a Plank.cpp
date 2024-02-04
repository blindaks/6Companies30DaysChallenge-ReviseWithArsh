class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        sort(left.begin(),left.end());
        sort(right.begin(),right.end());
        if(left.empty())
        return n-right[0];
        else if(right.empty())
        return left[left.size()-1];
        return max(left[left.size()-1], n-right[0]);
    }
};
