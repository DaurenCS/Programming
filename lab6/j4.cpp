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

	for (int row = 0; row < x; ++row){
	for(int col=0 ; col< y; ++col){
		if((row+col)%2==0 || row+col==0 ){
			a[row][col]= a[row][col]+1;
		}
		else if (row+col % 2!=0){
			a[row][col]= a[row][col]-1;
		}
	}
}


for (int row = 0; row < x; ++row){
	for(int col=0 ; col< y; ++col){
		cout<<a[row][col]<<" ";}
		cout<< endl;}













}