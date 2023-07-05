#include<iostream>
using namespace std;

int dig_count(int n)
{
    if(n==0)
    {
        return 0;
    }
    return 1+dig_count(n/10);
}

int digits(int n)
{
    if(n==0)
    {
        return 0;
    }
    int digit = n%10;
    cout<<digit<<endl;
    digits(n/10);
}

int main()
{
    int n;
    cin>>n;
    digits(n);
    return 0;
}