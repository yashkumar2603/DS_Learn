#include <iostream>
using namespace std;

int main()
{
    /*int m, n; 
    cout<<"Enter the number of rows and columns : "<<endl;
    cin>>m;
    cin>>n;*/
    int n;
    cout<<"Enter the number of rows and columns : "<<endl;
    cin>>n;
    int A[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>A[i][j];
        }
    }

    //rotate
    int temp1, temp2;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            temp1=A[i][j];
            A[i][j]=A[j][i];
            A[j][i]=temp1;
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            temp2=A[n-1-i][j];
            A[n-i-1][j]=A[i][j];
            A[i][j]=temp2;
        }
    }
    //rotation done

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}