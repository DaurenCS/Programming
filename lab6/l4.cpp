#include<iostream>
using namespace std;
int main(){
int x,y; cin>>x>>y;
int a[x][y];
for (int row = 0; row < x; ++row){
	for(int col=0 ; col< y; ++col){
		cin>>a[row][col];
	}
}
 int sum1;
 int min;
 
 
 for(int col=0 ; col< y; ++col){
 	int ir=1;
 int ic=1;
 min=a[0][0];
 sum1=0;
 	for (int row = 0; row < x; ++row){

 		if(a[row][col]<=min){
 			min= a[row][col];
 			ir=row+1;
 			ic=col+1;
 		 
 		}
 	}
 		
 	 

cout<<ir<<";"<<ic<<endl;

cout<<min<<endl;
}











}