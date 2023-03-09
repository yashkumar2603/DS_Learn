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

    while(i<=n)        //traverses through the rows.
    {
        int num=i;            //stores row number, as we have to print that in modified form.
        while(j<=n+i-1)       //traverses horizontally(column wise).
        {
            if(j<=n-i)        //spaces.
            {
                cout<<" ";
            }
            else if(j<=n)     //incrementing numbers in the start of the row.
            {
                cout<<num;
                num++;
            }
            else              //decrementing numbers, in the end of the column.
            {
                cout<<num;
                num--;
            }
            j++;
        }
        i++;
    }
}