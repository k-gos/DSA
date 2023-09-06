class Solution {
public:
    int majorityElement(vector<int>& nums){
        int i;
        int a;
        int max=0;;
        unordered_map<int,int> f;
        for( i=0;i<nums.size();i++)
        {
            f[nums[i]]++;
        }
        for(auto x:f)
        {
            
            if(x.second>max)
            {
                max=x.second;
                a=x.first;
            }
        }
        return a;
    }
};