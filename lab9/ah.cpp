#include<iostream>
using namespace std;
int main(){
	int ind1,ind2;
	long long x; cin>>x>>ind1>>ind2;
	int a[x];

		for(int i=0; i<x; i++){
		cin>>a[i];
	}
	 long long sum=0;

 for(int i=ind1-1; i<=ind2-1; i++){
 	sum+=a[i]; 
}
cout<<sum;
}


