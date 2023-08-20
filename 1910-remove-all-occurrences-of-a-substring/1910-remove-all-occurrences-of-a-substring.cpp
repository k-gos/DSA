class Solution {
public:
    string removeOccurrences(string s, string part) {
        int l=s.length();
        while(s.find(part)!=string::npos)
        {
            int idx=s.find(part);
            s.erase(idx,part.length());
        }  
        
        return s;
    }
};