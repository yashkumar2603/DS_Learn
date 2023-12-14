#include <bits/stdc++.h>
using namespace std;

class animal
{
private:
    int weight;

public:
    int age;
    char ch;

    void getWeight()
    {
        cout << weight;
    }
    void setWeight(int value)
    {
        weight = value;
    }
};

int main()
{
    animal horse;
    horse.setWeight(400);
    horse.getWeight();
    return 0;
}