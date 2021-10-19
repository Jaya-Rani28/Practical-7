#include<iostream>
using namespace std;
int main()
{
  int choice;
  cout<<"1-Date\n";
  cout<<"2-Month\n";
  cout<<"3-Year\n";
  
  cout<<"Enter your choice";
  cin>>choice;
  switch(choice)
  {
   case 1:
   cout<<"Date: 18\n";
   break;
   case 2:
   cout<<"Month: October\n";
   break;
   case 3:
   cout<<"Year: 2021";
   break;
   default:
   cout<<"Invalid choice";
   break;
   }
   } 
