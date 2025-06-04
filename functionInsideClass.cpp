#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int mathMarks;
    int englishMarks;

    Student(string name, int roll, int mathMarks, int englishMarks)
    {
        this->name = name;
        this->roll = roll;
        this->mathMarks = mathMarks;
        this->englishMarks = englishMarks;
    }

    void totalMarks()
    {
        cout << "Total marks of " << name << " = " << mathMarks + englishMarks << endl;
    }
};

int main()
{
    Student sakib("Sakib Ahmed", 23, 80, 90);

    sakib.totalMarks();

    Student rakib("Rakib Ahmed", 23, 50, 60);
    rakib.totalMarks();

    return 0;
}