#include<bits/stdc++.h>

using namespace std;

void bin(int x){
	 int a[10000];
	 int cont=0;

	 for(int i=0; x>0; i++ ){
	 	a[i]=x%2;
	 	cont++;
	 	x=x/2;

	 }

	 for(int i=cont-1; i>=0; i-- ){
	 	cout<<a[i];
	 }
	
}
int main(){
	int x;
	cin>>x;
	

	bin(x);
}