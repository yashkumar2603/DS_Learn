/*Print this : 
 *
  * * 
   * * *
    * * * * 
   * * * 
  * *
 *                  */

//Idea is top print the pattern in two parts, that is upper part till row 4 and then lower part in another set.


#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter : ";
    cin>>n;
    int n1, n2;
    n1=(n+1)/2;
    n2=n/2;

    for(int i=1; i<=n1; i++)
    {
        for(int j=1; j<=i-1; j++)
            cout<<"  ";
        for(int j=1; j<=i; j++)
            cout<<"* ";
        cout<<endl;
    }

    for(int i=1; i<=n2; i++)
    {
        for(int j=1; j<=n2-i; j++)
            cout<<"  ";
        for(int j=1; j<=n2-i+1; j++)
            cout<<"* ";
        cout<<endl;
    }

    return 0;   
}