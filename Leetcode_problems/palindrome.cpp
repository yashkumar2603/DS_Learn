class Solution {
public:
    bool isPalindrome(long long int x) {
        long long int temp=x;
        int digit;
        long long int reverse=0;
        if(x<0)
        {
            return false;
        }
        while(x!=0)
        {
            digit=x%10;
            x=x/10;
            reverse=reverse*10+digit;
        }
        if(reverse==temp)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};