class Solution {
public:
    int longestString(int x, int y, int z) {
        int c=0;
        if(x==y)
        c=x*2;
        else
        {
            c=min(x,y)*2+1;
        }
        return (z+c)*2;
    }
};
