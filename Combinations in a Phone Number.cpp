class Solution {
public:
    void solve(int i, vector<string>& ans, string str, string digits)
    {
        if(i==digits.length())
        {
            ans.push_back(str);
            return;
        }
        if(digits[i]=='2')
        {
            solve(i+1, ans, str+'a', digits);
            solve(i+1, ans, str+'b', digits);
            solve(i+1, ans, str+'c', digits);
        }
        else if(digits[i]=='3')
        {
            solve(i+1, ans, str+'d', digits);
            solve(i+1, ans, str+'e', digits);
            solve(i+1, ans, str+'f', digits);
        }
        else if(digits[i]=='4')
        {
            solve(i+1, ans, str+'g', digits);
            solve(i+1, ans, str+'h', digits);
            solve(i+1, ans, str+'i', digits);
        }
        else if(digits[i]=='5')
        {
            solve(i+1, ans, str+'j', digits);
            solve(i+1, ans, str+'k', digits);
            solve(i+1, ans, str+'l', digits);
        }
        else if(digits[i]=='6')
        {
            solve(i+1, ans, str+'m', digits);
            solve(i+1, ans, str+'n', digits);
            solve(i+1, ans, str+'o', digits);
        }
        else if(digits[i]=='7')
        {
            solve(i+1, ans, str+'p', digits);
            solve(i+1, ans, str+'q', digits);
            solve(i+1, ans, str+'r', digits);
            solve(i+1, ans, str+'s', digits);
        }
        else if(digits[i]=='8')
        {
            solve(i+1, ans, str+'t', digits);
            solve(i+1, ans, str+'u', digits);
            solve(i+1, ans, str+'v', digits);
        }
        else if(digits[i]=='9')
        {
            solve(i+1, ans, str+'w', digits);
            solve(i+1, ans, str+'x', digits);
            solve(i+1, ans, str+'y', digits);
            solve(i+1, ans, str+'z', digits);
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        if(digits.length()==0)
        return ans;
        int i=0;
        solve(i, ans, "", digits);
        return ans;
    }
};
