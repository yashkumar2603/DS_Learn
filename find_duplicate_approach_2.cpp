#include<iostream>
using namespace std;

int main()
{
    int n;
    int arr[n];
    cout<<"Enter the size of the array : ";
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum=sum+arr[i];
    }

    int repeat;
    repeat = sum-((n-2)*(n-1)/2);

    for(int i=0; i<n; i++)
    {
        if(arr[i]==repeat)
        {
            cout<<"the repeated number is : "<<arr[i];
        }
    }
    return 0;
}