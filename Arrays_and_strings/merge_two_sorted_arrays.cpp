#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin>>a;
    cin>>b;
    int arr1[a];
    int arr2[b];
    for(int i=0; i<a; i++)
    {
        cin>>arr1[i];
    }
    for(int i=0; i<b; i++)
    {
        cin>>arr2[i];
    }
    cout<<"inputs taken";

    //merging sorted.
    int c=a+b;
    int arr[c];    //merged array.
    int i=0, j=0;
    int t=0;
    while(i<a)
    {
        while(j<b)
        {
            if(arr1[i]>arr2[j])
            {
                arr[t]=arr2[j];
                i++;
                t++;
                cout<<"i gaya";
            }
            else if(arr1[i]<arr2[j])
            {
                arr[t]=arr1[i];
                j++;
                t++;
                cout<<"j gaya";
            }
            else
            {
                arr[t]=arr1[i];
                i++;
                j++;
                t++;
                cout<<"dono gaye";
            }
        }
    }
    for(int i=0; i<c; i++)
    {
        cout<<arr[i];
    }

}