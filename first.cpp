#include<iostream>
using namespace std;
int main(){
  int n ;
  cin>> n ;
  
 for (int i = 0; i < n; i++)
 {
  for (int j = 0; j < n-i-1; j++)
  {
    cout<<" ";
  }
  char ch='a';
  int breakpoint = (2*i+1)/2;
  for (int j = 0; j < 2*i+1; j++)
  {
    cout<<ch;
    if(breakpoint<=j)ch++;
    else ch--;
  }
  cout<<endl;
 }
 
    
return 0;
  }

  