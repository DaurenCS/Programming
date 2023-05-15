#include <iostream>
using namespace std;
int main(){
 int x,y; cin>>x>>y;
 int a[x][y];

int y=0;
 for(int row=0; row<x; ++row){
    for(int col=0; col<x; ++col){
      if(a[row][col]<0){
      	y++;

      }
    }

 }
cout<<y;



}