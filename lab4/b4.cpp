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
	int max2=a[0][0];
int row=0;
int col=0;

for(int row=0; row<x; ++row){
		for(int col=0; col<x; ++col){
if(a[row][col]==a[row-1][col-1] && a[row][col]==a[col][row] && a[row]==a[col])
	{cout<<"0";
return 0;}
}
}


	




for(int row=0; row<x; ++row){
		for(int col=0; col<x; ++col){


			if(a[row][col]>max){
				max= a[row][col];}
}}
	for(int row=0; row<x; ++row){
		for(int col=0; col<x; ++col){
			if(a[row][col]<max &&a[row][col]>max2 ){
				max2=a[row][col];
			    }
			}
		}
	



cout<<max2;


}



	

		
