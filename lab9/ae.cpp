#include<iostream>
using namespace std;
int main(){

	int x;cin>>x;
	int a[x];

	 for(int i=0; i<x; ++i){
	 	cin>>a[i];

	 } 
int s;
 for(int i=0; i<x; ++i){
 	s+= a[i]/10 + a[i]%10;
 }
cout<< s;
}

