#include <bits/stdc++.h>
using namespace std;

int main(){
	int x; 
	cin>>x;
double sum=0;
	for(int i=0; i<x;i++){
		float a;

		cin>>a;
		a=a-368.6;
		sum+=abs(a);
		
	}
	
	cout<<sum/12;
}