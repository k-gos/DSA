class Solution {
public:
    int singleNumber(vector<int>& nums) {
			map<long long,int>mpp;
        int n=nums.size();
        int m=0;
        for(int i=0;i<n;i++)
            mpp[nums[i]]++;
            for(auto it:mpp)
            {
                if(it.second==1)
                {
                   m=it.first;
                }
            }
        return m;
    }
};