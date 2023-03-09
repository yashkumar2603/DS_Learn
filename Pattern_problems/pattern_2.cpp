/* Print this : 

      1
     23
    345
   4567     */

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter : ";
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        int num=i;
        for(int j=1; j<=n; j++)
        {
            if(j<=n-i)
            {
                cout<<" ";

            }
            else{
                cout<<num;
                num=num+1;
            }
        }
        cout<<"\n";
    }
    return 0;
}