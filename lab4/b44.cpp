#include <iostream>
using namespace std;

int main(){

	int s;
	cin>>s;

	int a[s][s];

	for(int i=0; i<s; i++ ){
		for(int j=0; i<s; j++){
			cin>>a[i][j];
		}
	}
int max=a[0][0];
int max2=a[0][0];

	for(int i=0; i<s; i++ ){
		for(int j=0; i<s; j++){
		if(a[i][j]<max2){
			max2=a[i][j];

		}	

		}
		
	}
	cout<<max2;
}