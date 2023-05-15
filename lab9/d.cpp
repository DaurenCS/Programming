#include <iostream>
#include<math.h>
using namespace std;

int main() {
    
  double x,y,z;
  cin>>x>>y;
  if(x<y)
  cout<<"2";
   
   else if(x>y){
       z=ceil((2*x)/y);
       cout<<z;
       }
   

}
