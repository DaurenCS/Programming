#include<iostream>

using namespace std;

int main(){

	int x;cin>>x;
	int a[x];
	for(int i=0; i<x; ++i){
		cin>>a[i];
	}


for(int i=0; i<x; ++i){

	for(int i=1; i<x; ++i){
		if(a[i]<a[i-1]){
			int temp = a[i];
			a[i]=a[i-1];
			a[i-1]=temp;
		}
	}
}

for(int i=0; i<x; ++i){
	cout<<a[i] <<" ";
}

}