#include<bits/stdc++.h>

using namespace std; 

int main(){
	int n,a; cin>>n>>a;


	vector<int> v(n);
	for(int i=0; i<n; i++){
		int x; cin>>x;
		v[i]=x;
	}
	rotate(v.begin(),v.begin()+a, v.end());
	reverse(v.begin(),v.end());

	for(int i=0; i<n; i++){
		cout<<v[i]<<" ";
	}
}