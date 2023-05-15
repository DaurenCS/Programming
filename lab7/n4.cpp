#include <iostream>
using namespace std;

int main()
{
  int i,x, j;
  cin>>x;

  for(i=2; i<x; i++) {
     for(j=2; j <= (i/j); j++)
       if(!(i%j)) break; 
    if(j > (i/j)) cout << i<<" " ;
  }

  return 0;
}