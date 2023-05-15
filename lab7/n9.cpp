#include <bits/stdc++.h>

using namespace std;

int main(){
	int n; 
	cin>>n;
	int a[n];
	map<int, int > s;

	for(int i=0; i<n; i++){
		cin>>a[i];
		s[a[i]]=1;

		
	}
	int cont=0;
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
              int x;
              x=a[i]^a[j];

              if(s.count(x))
              	cont++;
		}
	}
	cout<<cont;
}