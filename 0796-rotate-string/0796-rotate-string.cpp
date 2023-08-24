class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length())
            return false;
        for(int i=0;i<s.length();i++)
        {
            reverse(s.begin(),s.begin()+1);
            reverse(s.begin()+1,s.end());
            reverse(s.begin(),s.end());
            if(s.find(goal)==0)
            {
                return true;
            }
        }
        return false;
    }
};