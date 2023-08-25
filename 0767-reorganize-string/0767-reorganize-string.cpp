class Solution {
public:
    string reorganizeString(string s) {
        int hash[26]={0};
        for(int i=0;i<s.size();i++)
        {
            hash[s[i]-'a']++;
        }
        char max_freq_char;
        int max_freq=INT_MIN;
        for(int i=0;i<26;i++)
        {
            if(hash[i]>max_freq)
            {
                max_freq=hash[i];
                max_freq_char=i+'a';
            }
        }
        int idx=0;
        while(max_freq>0&&idx<s.size())
        {
            s[idx]=max_freq_char;
            max_freq--;
            idx+=2;
        }
        if(max_freq!=0)
        {
            return "";
        }
        hash[max_freq_char-'a']=0;
        for(int i=0;i<26;i++)
        {
            while(hash[i]>0)
            {
                idx=idx>=s.size()?1:idx;
                s[idx]=i+'a';
                hash[i]--;
                idx+=2;
            }
        }
        return s;
        
    }
};