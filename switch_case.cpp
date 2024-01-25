#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age: "<<endl;
    cin >> age;
    switch (age)
    {
    case 12:
        cout <<"You cannot drive";
        break;

    case 18:
        cout <<"You can drive";
        break;
    
    default:
    cout <<"Enter onlu 12 or 18"<<"YOu write wrong age";

        break;
    }
    return 0;
}