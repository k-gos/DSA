class Solution {
public:
    int missingNumber(vector<int>& nums) {
    int sum=((nums.size()+1)*nums.size())/2;
    int s=0;
      for(int i = 0; i < nums.size(); i++){
          s=s+nums[i];
      } 
      
      return sum-s;
    }
};