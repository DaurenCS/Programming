#include <iostream>
using namespace std;
int main(){
 int x,y; cin>>x>>y;
 int a[x][y];
int z=0;

 for(int row=0; row<x; ++row){
    for(int col=0; col<y; ++col){
    	cin>>a[row][col];}
    }

 for(int row=0; row<x; ++row){
    for(int col=0; col<y; ++col){
      if(a[row][col]<0){
      	z++;

      }
    }

 }
cout<<z;



}