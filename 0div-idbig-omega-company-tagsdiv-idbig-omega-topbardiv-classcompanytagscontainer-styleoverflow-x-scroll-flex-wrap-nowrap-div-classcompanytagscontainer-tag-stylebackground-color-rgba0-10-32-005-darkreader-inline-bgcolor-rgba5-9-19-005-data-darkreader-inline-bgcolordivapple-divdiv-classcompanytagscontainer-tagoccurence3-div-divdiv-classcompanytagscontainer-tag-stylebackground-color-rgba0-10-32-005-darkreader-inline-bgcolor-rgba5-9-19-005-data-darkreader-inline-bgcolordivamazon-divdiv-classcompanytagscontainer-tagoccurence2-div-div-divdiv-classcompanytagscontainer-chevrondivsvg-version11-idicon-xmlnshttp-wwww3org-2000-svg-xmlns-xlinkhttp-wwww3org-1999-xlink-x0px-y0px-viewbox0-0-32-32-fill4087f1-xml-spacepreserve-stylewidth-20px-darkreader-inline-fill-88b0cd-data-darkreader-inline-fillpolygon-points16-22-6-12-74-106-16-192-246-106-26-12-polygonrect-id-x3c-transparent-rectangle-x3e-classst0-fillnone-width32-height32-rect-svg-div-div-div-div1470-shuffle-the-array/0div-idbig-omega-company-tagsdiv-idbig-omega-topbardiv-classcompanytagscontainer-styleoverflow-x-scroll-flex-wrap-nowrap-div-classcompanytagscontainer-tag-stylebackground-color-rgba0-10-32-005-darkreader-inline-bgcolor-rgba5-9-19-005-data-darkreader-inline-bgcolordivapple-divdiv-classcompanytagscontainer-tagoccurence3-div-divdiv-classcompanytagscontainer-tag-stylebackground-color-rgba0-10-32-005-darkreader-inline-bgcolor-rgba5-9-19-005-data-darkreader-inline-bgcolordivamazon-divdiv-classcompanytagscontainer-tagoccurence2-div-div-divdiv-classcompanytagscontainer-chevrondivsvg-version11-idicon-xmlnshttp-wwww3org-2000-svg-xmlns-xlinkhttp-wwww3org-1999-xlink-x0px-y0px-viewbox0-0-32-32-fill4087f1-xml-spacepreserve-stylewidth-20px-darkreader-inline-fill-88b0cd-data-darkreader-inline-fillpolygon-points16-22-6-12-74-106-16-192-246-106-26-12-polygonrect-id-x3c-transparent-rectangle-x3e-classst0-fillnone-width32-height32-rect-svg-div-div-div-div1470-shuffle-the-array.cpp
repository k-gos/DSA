class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
         int j=0;
        vector<int> arr;
        while(j<nums.size()/2)
        {
            arr.push_back(nums[j]);
            arr.push_back(nums[j+n]);

            j++;
        }
        return arr;
    }
};