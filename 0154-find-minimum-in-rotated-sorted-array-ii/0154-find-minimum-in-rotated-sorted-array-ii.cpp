class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0, high=nums.size()-1,ans=INT_MAX;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[low]==nums[mid]&&nums[mid]==nums[high])
            {
                ans=min(ans,nums[low]);
                low+=1;
                high-=1;
               
                continue;
            }
            if(nums[low]<=nums[mid])
            {
                ans=min(ans,nums[low]);
                    low=mid+1;
            }
            else
            {
                high=mid-1;
                ans=min(ans,nums[mid]);
            }
        }
        return ans;
    }
};