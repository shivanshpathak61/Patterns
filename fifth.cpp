#include<iostream>
using namespace std;
int main(){
  int n;
  cin >> n;

 


  for (int t = 0; t < n; t++)
  {
    for (int j = 0; j <n-t ; j++)
    {
      cout<<"*";
    }
    for (int k = 0; k < 2*t; k++)
    {
      cout<<" ";
    }
    for (int l = 0; l < n-t; l++)
    {
      cout<<"*";
    }
    
    cout<<endl;
  }
  for (int i = 0; i < n; i++)
  {
   for (int j = 0; j <=i; j++)
   {
     cout<<"*";
   }
   for (int k = 0; k < 2*(n-i-1); k++)
   {
     cout<<" ";
   }
   for (int l = 0; l <= i ; l++)
   {
     cout<<"*";
   }
   cout<<endl;
  }
  return 0;
}
