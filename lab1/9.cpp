#include <bits/stdc++.h>

using namespace std;

void bin(int x){
	int a[100000];
	int cont=0;
	int c1=0,c2=0;
	for(int i=0; x>0; i++){
		a[i]=x%2;
		cont++;
		x=x/2;
	}
	for(int i=cont-1; i>=0; i--){
		cout<<a[i];
	}
	cout<<endl;
	for(int i=cont-1; i>=0; i--){
		if(a[i]==0){
			c1++;
		} 
		else 
			c2++;
	}
	cout<<"zeros "<<c1<<endl;
	cout<<"number of units "<<c2;
}

int main(){
	int n;
	cin>>n;
	 bin(n);
}