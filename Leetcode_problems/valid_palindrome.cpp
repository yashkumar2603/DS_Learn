class Solution {
public:
    bool isPalindrome(string s) {
        int n=sizeof(s);
        char str[n];
        int j=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]!=',' && s[i]!='!' && s[i]!='@' && s[i]!='#' && s[i]!='$' && s[i]!='%' && s[i]!='^' && s[i]!='&' && s[i]!='*' && s[i]!='(' && s[i]!=')' && s[i]!='-' && s[i]!='_' && s[i]!='.' && s[i]!=';' && s[i]!=':') 
            {
                str[j]=s[i];
                j++;
            }
        }
        n=sizeof(str);
        for(int i=0; i<n; i++)
        {
            if(str[i]!=str[n-i-1]) return false;
        }
        return true;
    }
};