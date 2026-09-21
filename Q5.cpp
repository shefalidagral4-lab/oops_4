#include <iostream>
using namespace std;
// 5. Create a base class College with a constructor that initializes the College
// Name. Create a derived class Department with a constructor that initializes
// the Department Name.
class College
{
public:
    string college;

    College(string c)
    {
        college = c;
        cout << "College Constructor Called\n";
    }
};

class Department : public College
{
public:
    string dept;

    Department(string c, string d) : College(c)
    {
        dept = d;
        cout << "Department Constructor Called\n";
    }

    void display()
    {
        cout << "\nCollege: " << college;
        cout << "\nDepartment: " << dept;
    }
};

int main()
{
    Department d("ABC College", "Computer Science");
    d.display();
}