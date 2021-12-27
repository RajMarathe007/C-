#include <iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    switch (age)
    {
    case 18:
            cout<<"You are 18 years old";
        break;
    case 22:
            cout<<"You are 22 years old";
        break;
    case 8:
            cout<<"You are 8 years old";
        break;    
    default:
            cout<<"No special case";
        break;
    }
         
    return 0;
}
