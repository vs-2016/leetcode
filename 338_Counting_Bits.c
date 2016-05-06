class Solution {
public:
    vector<int> countBits(int num) {
	vector<int> r;
	if(num<0)return r;
	r.push_back(0);
	if(num<1)return r;
	r.push_back(1);
	for(int k=1;r.size()<=num;k<<=1){
	    for(int i=0;i<k*2 && r.size()<=num;i+=2){
	        int x=r[k+i/2];
		r.push_back(x);
		if(r.size()<=num)r.push_back(x+1);
		else return;
	    }
	}
	return r;
    }
};
