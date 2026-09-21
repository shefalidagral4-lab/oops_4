#include <iostream>
using namespace std;
// 4. Create a C++ program to demonstrate Hierarchical Inheritance.
class Vehicle
{
public:
    string brand, model;
};

class Car : public Vehicle
{
public:
    int doors;

    void input()
    {
        cout << "Enter Car Brand: ";
        cin >> brand;
        cout << "Enter Model: ";
        cin >> model;
        cout << "Enter Number of Doors: ";
        cin >> doors;
    }

    void display()
    {
        cout << "\nCar Brand: " << brand;
        cout << "\nModel: " << model;
        cout << "\nDoors: " << doors;
    }
};

class Bike : public Vehicle
{
public:
    int engine;

    void input()
    {
        cout << "\nEnter Bike Brand: ";
        cin >> brand;
        cout << "Enter Model: ";
        cin >> model;
        cout << "Enter Engine Capacity: ";
        cin >> engine;
    }

    void display()
    {
        cout << "\nBike Brand: " << brand;
        cout << "\nModel: " << model;
        cout << "\nEngine: " << engine << " cc";
    }
};

int main()
{
    Car c;
    Bike b;

    c.input();
    b.input();

    cout << "\n--- Car Details ---";
    c.display();

    cout << "\n\n--- Bike Details ---";
    b.display();
}