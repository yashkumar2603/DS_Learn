#include <iostream>
using namespace std;

int main()
{
    int a[5];  
    cout<<endl;                    
    for(int i=0; i<5; i++)
    {
        cin>>a[i];
    }
    cout<<a<<endl;                       //gives the base memory address of the memory block alloted to the array.
    for(int i=0; i<5; i++)
    {
        cout<<a[i]<<" ";         
    }
}