#include<iostream>
using namespace std;

int zeroes(int n, int c)
{
    if(n==0)
    {
        return c;
    }
    int digit = n%10;
    if(digit==0)
    {
        c++;
    }
    zeroes(n/10, c);
}

int main()
{
    int n;
    cin>>n;
    cout<<zeroes(n,0)<<endl;
    return 0;
}