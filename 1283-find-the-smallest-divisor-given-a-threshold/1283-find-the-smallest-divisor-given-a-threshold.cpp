class Solution {
public:
    int findMax(vector<int> &nums)
    {
        int maxi=INT_MIN;
        for(int i=0;i<nums.size()-1;i++)
        {
            maxi=max(nums[i],maxi);
        }
        return maxi;
    }
    int divSum(vector<int>&nums,int div)
    {
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=ceil((double)nums[i]/(double)div);
        }
        return sum;
            
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1;
        int high=*max_element(nums.begin(),nums.end());
        if(nums.size()==1)
        {
            return ceil((double)nums[0]/(double)threshold);
        }
        while(low<=high)
        {
            int mid=(low+high)/2;
            
                if(divSum(nums,mid)<=threshold)
                {
                    
                    high=mid-1;
                }
                    
            else
                low=mid+1;
                
        }
        return low;
        
    }
};