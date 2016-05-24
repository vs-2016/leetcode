class Solution {
public:
    int integerBreak(int n) {
        int r=1;
        if(n<4)return n-1;
        for(;n>2;n-=3,r*=3);
        if(n==1)r=r/3*4;
        else if(n==2) r*=2;
        return r;
    }
};