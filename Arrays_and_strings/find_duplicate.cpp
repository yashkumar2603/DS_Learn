#include <iostream>
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
    
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                cout<<"The duplicate number is : "<<arr[i];
            }

        }
    }
    return 0;
}