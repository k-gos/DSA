class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maximum=0;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                count++;
               
            }
            else
            count=0;
             maximum=max(maximum,count);
        }
        return maximum;
    }
};