class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       sort(strs.begin(),strs.end());

        string s1=strs[strs.size()-1];
        string s2=strs[0];
        string s3="";

        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]==s2[i])
            {
                s3+=s1[i];
            }else
            {
                return s3;
            }
        }
        return s3;
    }
};