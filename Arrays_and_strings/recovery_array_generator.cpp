#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter : ";
    cin>>n;
    int index = 0;
    int lb=(n-1)/2;
    int ub=n/2;
    int mid=lb;
    int input[n];
    int output[n];

    for(int i=0; i<n; i++)
    {
        cin>>input[i];
    }

    while(lb>=0)
    {
        output[index]=input[lb];
        index++;
        if(lb!=ub)
        {
            output[index]=input[ub];
            index++;
        }
        lb--;
        ub++;
    }

    for(int i=0; i<n; i++)
    {
        cout<<output[i]<<" ";
    }

    return 0;
}