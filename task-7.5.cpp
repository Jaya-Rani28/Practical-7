#include<iostream>
using namespace std;

int main()
{
 int row=1, column=1;
 int i;
 do{
 do{
    i--;
    }
    while(i>=row);
    column=1;
    do{
      cout<<"*";
      cout<<"";
      column++;
      }
      while(column<=row);
      cout<<"\n";
      row++;
      }
      while(column<=4);
      return 0;
      }
