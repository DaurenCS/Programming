#include<bits/stdc++.h>

using namespace std;

void fun(int x){
	
	int a[100000];
	int cont=0;
	for(int i=0; x>0; i++ ){
		a[i]=x%2;
		cont++;
		x=x/2;
	}
	for(int i=cont-1; i>=0; i--){
		cout<<a[i];
	}
	cout<<endl;
}

int main(){
	int n; 
	cin>>n;

	vector<int> v(n);
	for(int i=0; i<n; i++){
       int x;
       cin>>x;
		v[i]=x;
	}

	for_each(v.begin(), v.end(), fun);

	}