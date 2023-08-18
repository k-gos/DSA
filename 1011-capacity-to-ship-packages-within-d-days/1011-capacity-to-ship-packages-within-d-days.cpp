#include<utility>
class Solution {
public:
    int numberOfDays(vector<int>weights,int cap)
    {
        int load=0,days=1;
        for(int i=0;i<weights.size();i++)
        {
            if(load+weights[i]>cap)
            {
                days+=1;
                load=weights[i];
            }
            else
                load+=weights[i];
        }
        return days;
            
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int high=accumulate(weights.begin(),weights.end(),0);
        while(low<=high)
        {
            int mid=(low+high)/2;
            int totaldays=numberOfDays(weights,mid);
            if(totaldays>days)
            {
                low=mid+1;
            }
            else
                high=mid-1;
            
        }
        return low;
        
    }
};