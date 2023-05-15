#include <iostream>

using namespace std;


void fun(int s, int a[],int x[]){
	int d[s];
	for(int i=0; i<s; i++){
		d[i]=abs(x[i]-a[i]);
	cout<<d[i]<<" ";
	}


	

}
int main(){
int s;

cin>>s;
int a[s];
int x[s];
for(int i=0; i<s; i++){
		cin>>a[i];
	}
	for(int i=0; i<s; i++){
		cin>>x[i];
	}


 fun(s,a,x);
	

}














