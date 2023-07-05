#include<iostream>
using namespace std;

int finding(int arr[], int e, int n, int k)
{
    if(e==0)
    {
        return -1;
    }
    
    if(arr[e]==k)
    {
        return e;
    }
    return finding(arr, e-1, n-1, k);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    cout<<finding(arr, n-1, n, k)<<endl;
    return 0;
}