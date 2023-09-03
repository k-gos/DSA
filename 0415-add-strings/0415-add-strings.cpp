class Solution {
public:
    void solve(string&num1,int p1,string&num2, int p2,int carry, string&ans)
    {
//         base case
        if(p1<0&&p2<0)
        {
            if(carry!=0)
                ans.push_back(carry+'0');
            return;
        }
//         Recursive case
        int n1=(p1>=0?num1[p1]:'0')-'0';
        int n2=(p2>=0?num2[p2]:'0')-'0';
        int char_sum=n1+n2+carry;
        ans.push_back(char_sum%10+'0');
        solve(num1,p1-1,num2,p2-1,char_sum/10,ans);
    }
    string addStrings(string num1, string num2) {
        string ans="";
        solve(num1,num1.length()-1,num2,num2.length()-1,0,ans);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};