class Solution {
public:
    int reverse(int x)
    {
        int flag;
        if(x<0)
        {
            flag=1;
        }
        else flag=0;
        int digit;
        int ans=0;
        while(x!=0)
        {
            digit=x%10;
            x=x/10;
            ans=ans*10+digit;
        }
        if(flag==0) return ans;
        else if(flag==1) return ans*-1;
    }
};