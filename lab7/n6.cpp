#include<iostream>

using namespace std;

void fun(int a, int b){

	int s[a][b];

	for(int i=0; i<a; i++){
		for(int j=0; j<b; j++){
			cin>>s[i][j];
		}
	}

	for(int i=0; i<b; i++){
		for(int j=0; j<a; j++){

			cout<<s[j][i]<<" ";
			
		}
cout<<endl;
	}


}

int main(){
	int a;
	int b;
	cin>>a>>b;

	fun(a,b);
}
