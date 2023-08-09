class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
//         int l=0,h=nums.size()-1;
        vector <int> ans;
//         while(l<=h)
//         {
//             int mid=(l+h)/2;
//             if(nums[mid]>=target)
//             {
//                 ans[0]=mid;
//                 h=mid-1;  
//             }
//             else{
//                 l=mid+1;
//             }
//         }
//         if((ans[0]==nums.size())||(nums[ans[0]]!=target))
//         {
//             ans[0]=-1;
//             return ans;
//         }
//         l=0,h=nums.size()-1;
//         while(l<=h)
//         {
//             int mid=(l+h)/2;
//             if(nums[mid]>target)
//             {
//                 ans[1]=mid-1;
//                 h=mid-1;
//             }
//             else
//                 l=mid+1;
//         }
//         return ans;
        int first = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        int second = upper_bound(nums.begin(), nums.end(), target) - nums.begin();
        if(first==nums.size()|| nums[first]!=target)
        {
            return {-1,-1};
        }
        ans.push_back(first);
        ans.push_back(second-1);
        return ans;
        
    }
};