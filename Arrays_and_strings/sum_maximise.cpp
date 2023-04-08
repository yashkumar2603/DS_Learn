#include <iostream>
using namespace std;

int max_sum(int n1, int n2, int arr1[], int arr2)
{
    int sum;
    int flag=0;
    int temp;
    for(int i=0; i<n1; i++)
    {
        for(int j=0; j<n2; j++)
        {
            if(arr1[i]!=arr[j])
            {
                sum+=arr2[i];
            }
            else if(arr1[i]==arr2[j])
            {
                temp=i;
                flag=1;
                break;
            }
            if(flag==1)
            {
                for(int k=temp; k<n1; k++)
                {
                    sum+=arr1[k];
                }
            }
            
        }
        if(flag==1)
        {
            for(int k=temp; k<n1; k++)
            {
                sum+=arr1[k];
            }
        }
    }
    return sum;
}
int main()
{
    int n1, n2;
    cin>>n1>>n2;
    int arr1[n1], arr2[n2];
    for (int i=0; i<n1; i++)
    {
        cin>>arr1[i];
    }
    for(int j=0; j<n2; j++)
    {
        cin>>arr2[j];
    }
    cout<<max_sum(n1, n2, arr1, arr2)<<endl;
    return 0;
}