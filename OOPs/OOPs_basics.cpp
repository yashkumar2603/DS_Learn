#include <bits/stdc++.h>
using namespace std;

class Hero
{
    // properties
public:
    char name[100];
    int health;
    char level;
};

int main()
{
    Hero h1;
    cout << "size : " << sizeof(h1) << endl;
    cout << "Health : " << h1.health << endl;
    return 0;
}