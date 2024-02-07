class Solution{   
public:
    string printMinNumberForPattern(string S){
        // code here
        int n=S.size();
        string result;
        stack<int>st;
        for(int i=0;i<=n;++i) 
        {
            st.push(i+1);
            if(i==n||S[i]=='I') 
            {
                while(!st.empty()) 
                {
                    result+=to_string(st.top());
                    st.pop();
                }
            }
        }
        return result;
    }
};
