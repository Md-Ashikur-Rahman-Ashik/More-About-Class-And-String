#include <bits/stdc++.h>
using namespace std;

class Cricketer
{
public:
    int jersey;
    string country;

    Cricketer(int jersey, string country)
    {
        this->jersey = jersey;
        this->country = country;
    }
};

int main()
{
    Cricketer *riyad = new Cricketer(50, "Bangladesh");

    Cricketer *musfiq = new Cricketer(80, "Bangladesh");

    *musfiq = *riyad;

    cout << riyad->jersey << endl
         << riyad->country << endl;

    cout << musfiq->jersey << endl
         << musfiq->country << endl;

    delete riyad;

    cout << musfiq->jersey << endl
         << musfiq->country;

    return 0;
}