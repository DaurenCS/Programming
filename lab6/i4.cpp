#include <iostream>
#include <math.h>
using namespace std;
int main(){
 int x,y; cin>>x>>y;
 int a[x][y];

for(int row=0; row<x; ++row){
    for(int col=0; col<y; ++col){
    	cin>>a[row][col];}
    }

for(int row=0; row<x; ++row){
    for(int col=0; col<y; ++col){
int t=sqrt(a[row][col]);
if(t*t==a[row][col]){
	a[row][col]= t;
}

    }
}
for(int row=0; row<x; ++row){
    for(int col=0; col<y; ++col){
    	cout<<a[row][col]<<" ";}
    	cout<<endl;
    }









}