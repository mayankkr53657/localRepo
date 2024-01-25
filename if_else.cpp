#include <iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if(age>=155 || age<1){
        cout<<"Invalid age";
    }
    
    else if (age>=18){
        cout<<"You can drive";
    }

    else{
        cout<<"you cannot drive";
    }
    return 0;
}