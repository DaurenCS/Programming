#include<iostream>
using namespace std;
int main(){

	int x;cin>>x;
	int a[x];

	 for(int i=0; i<x; ++i){
	 	cin>>a[i];}

for(int i=0; i<x; ++i){
	a[i]*=a[i];
	cout<<a[i]<<" ";
}
}
	 