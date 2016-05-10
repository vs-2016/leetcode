class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> r(num+1,0);
        for(int i=1;i<r.size();i++)r[i]=i&0x1?r[i/2]+1:r[i/2];
        return r;
    }
};