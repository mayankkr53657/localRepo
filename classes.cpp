#include <iostream>
using namespace std;

class Employee {
    public:
     string name;
     int salary;
};

int main()
{
    Employee may;
    may.name = "Mayank";   
    may.salary = 100;
    cout<<"The name of our first employee is  "<< may.name << " and his salary is "<<may.salary;

    return 0;
}