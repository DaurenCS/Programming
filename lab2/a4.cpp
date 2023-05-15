#include <iostream>
using namespace std;
int main(){
	int x;cin>>x;
	int a[x][x];

	for(int row=0; row<x; ++row){
		for(int col=0; col<x; ++col){
			cin>>a[row][col];
		}
	}
	int max=a[0][0];
for(int row=0; row<x; ++row){
		for(int col=0; col<x; ++col){
			if(a[row][col]>max){
				max= a[row][col];
			}
		}
	}
	/*for(int row=0; row<x; ++row){
		for(int col=0; col<x; ++col){*/
			cout<<max;
		}
		



