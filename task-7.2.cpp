#include<iostream>
#include<time.h>
using namespace std;
int main()
{
  int choice;
  cout<<"1-Date\n";
  cout<<"2-Month\n";
  cout<<"3-day\n";
  
  time_t current = time(0);
  tm *ltm = localtime(&current);
  
  cout<<"Enter your choice";
  cin>>choice;
  switch(choice)
  {
   case 1:
   cout<<"Date: "<<ltm->tm_mday<<endl;
   break;
   case 2:
   cout<<"Month: "<< 1 + ltm->tm_mon<<endl;
   break;
   case 3:
   cout<<"Day: "<< ltm->tm_wday<<endl;;
   break;
   default:
   cout<<"Invalid choice";
   break;
   }
   } 
