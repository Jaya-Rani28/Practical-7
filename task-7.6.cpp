#include<iostream>
using namespace std;

int main()
{
 int row, s;
 cout<<" ";
 cin>>row;
 s=row;
 for(int i=0; i<row; i++)
 {
  for(int j=0;j<i;j++)
  {
  cout<<" ";
  }
  for(int k=0;k<s;k++)
  {
     cout<<"*";
  }
  s--;
  cout<<endl;
 }
 return 0;
 }  
