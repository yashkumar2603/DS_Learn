#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    //cout<<str<<endl;
    int n = str.size();
    cout<<n;
    for(int i=0; i<n; i++)
    {
        char rev[n];
        while(isspace(str[i])==0)
        {
            rev[i]=str[i];
        }
        for(int j=i-1; j>=0; j++)
        {
            cout<<rev[j];
        }
        cout<<" ";
    }
    cout<<endl;
    return 0;
}

