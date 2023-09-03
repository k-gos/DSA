class Solution {
public:
    bool detectCapitalUse(string word) {
 int count_upper=0,count_lower=0;
     for(int i=0;i<word.size();i++){
         if(isupper(word[i])) count_upper++;
         else count_lower++;
    }
    if(count_upper==1){
        if(isupper(word[0])) return true;
    }
    if(count_upper==word.size()||count_lower==word.size()) return true;
    else return false; 
    }
};