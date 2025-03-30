#include<iostream>
using namespace std;
int main(){
  int n ;
  cin>> n ;
  char j ='a';
 for (int i = 0; i < n; i++)
 {
  for ( char ch= j; ch >= 'a'; ch--)
  {
    cout<<ch;
  }j++;
  cout<<endl;
 }
 
    
return 0;
  }

  