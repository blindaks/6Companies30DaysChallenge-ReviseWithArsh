class DataStream {
public:
    int v=0;int c=0;int i=0;int n;
    DataStream(int value, int k) {
        v=value;
        n=k;
    }
    
    bool consec(int num) {
        i++;
        if(num==v)
        c++;
        else
        c=0;
        if(i<n || c<n)
        return false;
        else
        return true;
    }
};

/**
 * Your DataStream object will be instantiated and called as such:
 * DataStream* obj = new DataStream(value, k);
 * bool param_1 = obj->consec(num);
 */
