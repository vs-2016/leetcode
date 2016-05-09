class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> r(nums.size(),1);
	for(int i=1;i<nums.size();i++)r[i]=r[i-1]*nums[i-1];
        for(int i=nums.size()-1,x=1;i>=0;i--){
            r[i]*=x;
            x*=nums[i];
	}
	return r;
    }
};
