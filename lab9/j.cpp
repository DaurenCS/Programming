#include <iostream>
using namespace std;



int main()
{
    int x,y=0,i;
    cin >> x;
    int a[x]; 
    for(int i=0; i<x; i++){
        cin>>a[i];
        
 
    while ( a[i] > 0 ) {
     
         int z=a[i]%10;
         if(z==0)
            y+=1;
           a[i]/=10;
    }
  }        
cout << y ;
}
    
