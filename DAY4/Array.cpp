//It is collection of items of similar type stored in contiguous(one next to other)memory location
#include<iostream>
using namespace std;
int main()
{
   //Array Example
int marks[]={78,39,45,94};
 
  int mathMarks[4];
  mathMarks[0]=46; 
  mathMarks[1]=72;
  mathMarks[2]=59;
  mathMarks[3]=98;

  cout<<"These are maths marks"<<endl; 
  cout<<mathMarks[0]<<endl;
  cout<<mathMarks[1]<<endl;
  cout<<mathMarks[2]<<endl;
  cout<<mathMarks[3]<<endl<<endl;
   
   //you can change value of array
   marks[2]=100;
   
   
   cout<<"These are total marks"<<endl;

   for (int i = 0; i < 4; i++)
   { 
       cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl; 
   }
  
return 0;
}
