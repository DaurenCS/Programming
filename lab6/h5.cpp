#include <iostream>
using namespace std;
int main(){

	string x;
	cin>>x;
	int cont=0;
	for(int i=0; i<x.size(); i++){
		

			if(x[i]==x[i-1]){
				cont++;
			}


		
	}

cout<<cont<<" ";





}