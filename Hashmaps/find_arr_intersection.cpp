#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    unordered_map<int, int> track;

    //taking proper input.
    int n1, n2;
    cin>>n1;
    int a1[n1];
    for(int i=0; i<n1; i++)
    {
        cin>>a1[i];
    }
    cin>>n2;
    int a2[n2];
    for(int i=0; i<n2; i++)
    {
        cin>>a2[n2];
    }

    
    for(int i=0; i<n1;i++)
    {
        track[a1[i]]=1;
        track[a1[i]]++;
    }
    
    for(int i=0; i<n2;i++)
    {
        if(track[a2[i]]>0)
        {
            cout<<a2[i]<<endl;
        }
    }
    return 0;
}