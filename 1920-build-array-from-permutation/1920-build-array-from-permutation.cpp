class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> arr;
        int i=0;
        while(i<nums.size())
        {
            arr.push_back(nums[nums[i]]);
            i++;
        }
        return arr;
    
    }
};