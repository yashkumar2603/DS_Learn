#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a, b;
    getline(cin, a);
    getline(cin, b);
    cout<<a.size()<<" "<<b.size()<<endl;
    cout<<a+b<<endl;
    char temp;
    temp=b[0];
    b[0]=a[0];
    a[0]=temp;
    cout<<a<<" "<<b<<endl;
    return 0;

}