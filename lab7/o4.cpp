#include <iostream>
using namespace std;
int main(){
int x; cin>>x;
int a[x][x]; 
for (int r = 0; r < x; ++r){
	for(int c=0; c<x; ++c){
		cin>>a[r][c];
	}
	
}
int max=a[0][0];
int i1=1;
int i2=1;
			for (int r = 0; r < x; ++r){
	for(int c=0; c<x; ++c){
		if(a[r][c]>max  && a[r][c]==a[c][r] ){
			max=a[r][c];
			i1=r+1;
			i2=c+1;

		}

		}



	}




cout<<"Maximum element is: " <<max<<" "<<" with coordinates: "<<i1<<";"<<i2;










}