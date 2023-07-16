#include<iostream>
#include<unordered_map>

using namespace std;
int main()
{
    unordered_map<int,int> track;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++)
    {
        track[arr[i]]++;
    }
    int max=0, ans=0;
    for(int i=0; i<n; i++)
    {
        if(track[arr[i]]>max){
            max=track[arr[i]];
            ans=arr[i];
        }
    }
    cout<<ans<<endl;
    return 0;
}