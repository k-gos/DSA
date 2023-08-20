class Solution {
public:
    string removeDuplicates(string s) {
        int l=s.length();
        string ans=" ";
        
        for(int i=0;i<l;i++)
        {
           if(s[i]!=ans[ans.length()-1])
           {
               ans.push_back(s[i]);
              
           }
            else
            {
                ans.pop_back();
            }
                
        }
        ans.erase(0,1);
        return ans;
        
    }
};