#include<iostream>

using namespace std;

int main(){
int y;
	int x;cin>>x>>y;
	int a[x][y];
	for(int i=0; i<x; i++){
		for(int j=0; j<y; j++){
		cin>>a[i][j];
	}
}
int max= a[0][0];
for(int i=0; i<x; i++){
		for(int j=0; j<y; j++){
			if(max<a[i][j]){
				max= a[i][j];
			}


		}
   }
   cout<<max; 
}