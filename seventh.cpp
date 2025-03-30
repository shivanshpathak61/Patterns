#include<iostream>
using namespace std;
int main(){
  int n;
  cin >> n;
  for (int i =1 ; i <=2*n-1; i++)
  { int stars = i;
    int spaces =2*(n-i); 
    if(i>n){
      spaces =2*(i-n); 
      stars =2*n-i ;
    } 
    for (int j = 1; j <=stars; j++)
    {
      cout<<"*";
    }
    for (int k = 0; k <spaces; k++)
  { 
    cout<<" ";
  }
  for (int j = 1; j <=stars; j++)
    {
      cout<<"*";
    }
 
  
    cout<<endl;
  }
  
  
  return 0;
}
