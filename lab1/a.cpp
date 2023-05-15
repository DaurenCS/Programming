#include <bits/stdc++.h>
#include<vector>

using namespace std;

int main(){
	int n; cin>>n;
	
	
int a[n];

	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	

int cont=0;
	for(int i=0; i<n; i++){
		for(int j=a[i]; j<0; j-- ){
           if(a[i]%j==0){
			cont++;
			} 
			if(cont==2){
				cout<<a[i]<<" ";
			}
		}
	
}
}