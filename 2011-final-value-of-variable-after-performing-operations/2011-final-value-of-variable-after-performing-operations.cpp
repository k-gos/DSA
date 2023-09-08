class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int i=0,ans=0;
        while(i<operations.size())
        {
            if(operations[i]=="++X" || operations[i]=="X++")
                ans+=1;
            else
                ans-=1;
            i++;
        }
        return ans;
    }
};