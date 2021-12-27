#include <iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if (age<18)
    {
        cout<<"you cannot come to my party";
    }
    else if (age==18)
    {
        cout<<"you are kid,get your kid pass"<<endl;
    }
    else
    {
        cout<<"you can come to my party"<<endl;
    }
         
    return 0;
}
