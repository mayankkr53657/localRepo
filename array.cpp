#include<iostream>
using namespace std;

int main()
{
    // int arr[3] = {1,3,6};
    // cout<<arr[0];

    // int marks[] = {10,6,15};
    // cout<< marks[2];

    int marks[5];
    for (int i = 1; i < 6; i++)
    {
        cout<<"Marks of "<<i<<"subjects = ";
        cin>>marks[i];
        cout<<endl;

    }

    for (int i = 0; i < 6; i++)
    {
        cout<<"Marks of "<<i<<"subjects = ";
        cout<<marks[i];
        cout<<endl;
    }

    return 0;
}