#include <iostream>
using namespace std;

int main()
{
    int i,j,rows;
    cout<<" ";
    cin>>rows;     

    i=rows;
while(i>=1){  
    j=rows;
  while(j>=1+rows-i){ 
  cout<<"*";
   j--;

}
     j=i*2;
    while(j<rows*2-1){
  cout<<" ";
  j++;

    }
  cout<<"\n";
  i--;

}
    return 0;
}
