/*print this:
      1
     232
    34543
   4567654  */

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter : ";
    cin>>n;
    int i,j;
    i=1;
    j=1;

    while(i<=n)
    {
        int num=i;
        while(j<=n+i-1)
        {
            if(j<=n-i)
            {
                cout<<" ";
            }
            else if(j<=n)
            {
                cout<<num;
                num++;
            }
            else
            {
                cout<<num;
                num--;
            }
            j++;
        }
        i++;
    }
}