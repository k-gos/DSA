class Solution {
public:
    bool isVowel(char ch)
    {
        ch=tolower(ch);
        char vow[]={'a','e','i','o','u'};
        int l=0,h=4;
        while(l<=h)
        {
            int mid=(l+h)/2;
            if(vow[mid]==ch)
                return true;
            else if(vow[mid]>ch)
                h=mid-1;
            else
                l=mid+1;
        }
        return false;
        
    }
    string reverseVowels(string s) {
        int l=0,h=s.length()-1;
        while(l<h)
        {
           if(isVowel(s[l])&&isVowel(s[h]))
           {
               swap(s[l],s[h]);
               l++;
               h--;
           }
            else if(isVowel(s[l])==0)
            {
                l++;
            }
            else
                h--;
        }
        return s;
    }
};