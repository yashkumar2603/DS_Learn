#include <iostream>
using namespace std;

void search(int A[][100], int m, int n, int t)
{
    int i=0, j=n-1;
    while(i<m && j>=0)
    {
        if(A[i][j]<t)
        {
            i++;
        }
        else if(A[i][j]>t)
        {
            j--;
        }
        else if(A[i][j]==t)
        {
            cout<<"The element is at : "<<i<<", "<<j<<endl;
            return;
        }

    }
    cout<<"Element not present."<<endl;
}

int main()
{
    /*int m, n; 
    cout<<"Enter the number of rows and columns : "<<endl;
    cin>>m;
    cin>>n;*/

    int A[100][100];
    cout<<"Enter the range : "<<endl;
    int m,n;
    cin>>m;
    cin>>n;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>A[m][n];
        }
    }

    int t;
    cout<<"Enter the target element to be searched : "<<endl;
    cin>>t;

    search(A, m, n, t);
    return 0;
}