class Solution {
public:
    bool checkpalin(string s, int i, int j)
    {
        while(i<=j)
        {
            if(s[i]!=s[j])
                return false;
            else
            {
                i++;
                j--;
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i=0,j=s.length()-1;
        while(i<=j)
        {
            if(s[i]!=s[j])
            {
                return (checkpalin(s,i+1,j)||checkpalin(s,i,j-1));
            }
            else
            {
                i++;
                j--;
            }
        }
        return true;
    }
};