class Solution {
public:
    // void solve(string&s,string &part)
    // {
    //     if(s.find(part)==string::npos)
    //         return;
    //     int idx=s.find(part);
    //     s.erase(idx,part.length());
    //     solve(s,part);
    // }
    string removeOccurrences(string s, string part) {
        while(s.find(part)!=string::npos)
        {
            int idx=s.find(part);
            s.erase(idx,part.length());
        }  
        
        return s;
        
        //Recursive approach
        // solve(s,part);
        // return s;
    }
};