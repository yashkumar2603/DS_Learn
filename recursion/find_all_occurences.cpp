#include<iostream>
using namespace std;

int finding(int arr[], int s, int n, int k)
{
    if(s==n)
    {
        return -1;
    }
    if(arr[s]==k)
    {
        cout<<s<<endl;
    }
    return finding(arr, s+1, n, k);
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
    cout<<finding(arr, 0, n, k)<<endl;
    return 0;
}