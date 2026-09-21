#include <iostream>
using namespace std;
// 3. Create a C++ program to demonstrate Multiple Inheritance.
class Academic
{
public:
    int marks;
};

class Sports
{
public:
    int score;
};

class Result : public Academic, public Sports
{
public:
    void input()
    {
        cout << "Enter Academic Marks: ";
        cin >> marks;
        cout << "Enter Sports Score: ";
        cin >> score;
    }

    void display()
    {
        cout << "\nTotal Score = " << marks + score;
    }
};

int main()
{
    Result r;
    r.input();
    r.display();
}