#include <iostream>
using namespace std;
int main(){
int x; cin>>x;
int a[x][x];
for(int r=0; r<x; ++r){
	for(int c=0; c<x; ++c){
		cin>>a[r][c];
	}
}


int max=0;
int maxi1,maxi2;



for(int r=0; r<x; ++r){
	for(int c=0; c<x; ++c){
		if(max<a[r][c]  ){
			max= a[r][c];
			maxi1=r+1;
			maxi2=c+1;

		}
	}
	}


cout<<maxi1<<" "<<maxi2;










}