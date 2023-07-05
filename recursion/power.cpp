#include<iostream>
using namespace std;

int calc_power(int x, int n)
{
    if(n==0)
    {
        return 1;
    }
    return x*calc_power(x,n-1);
}


int main()
{
    int x,n;
    cin>>x;
    cin>>n;
    cout<<calc_power(x,n)<<endl;
    return 0;
}