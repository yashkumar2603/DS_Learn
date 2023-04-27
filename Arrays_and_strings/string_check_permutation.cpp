#include <iostream>
#include <cstring>
using namespace std;

bool checkPermutation(string str1, string str2)
{
    int frequency[256] = {0};   //frequency of all the 256 ASCII charracters.
    char s1[str1.size()];
    char s2[str2.size()];
    int n = str1.size();
    for(int i=0; i<n; i++)
    {
        s1[i]=str1[i];
        s2[i]=str2[i];
    }
    if(strlen(s1)!=strlen(s2))
    {
        return false;
    }
    else
    {
        for(int i=0; i<n; i++)
        {
            int code1 = int(str1[i]);
            frequency[code1]+=1;
            int code2 = int(str2[i]);
            frequency[code2]-=1;
        }
        int flag=0;
        for(int i=0; i<256; i++)
        {
            if(frequency[i]!=0)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            return false;
        }
        else if(flag==0)
        {
            return true;
        }
    }
}

int main()
{
    string str1= "abcdef";
    string str2= "acbdge";
    cout<<"start"<<endl;
    cout<<checkPermutation(str1, str2)<<endl;
    return 0;
}