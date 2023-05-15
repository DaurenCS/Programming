#include <bits/stdc++.h>
#include<vector>

using namespace std;

int main(){
	int n; cin>>n;
	int a,b;
	

	vector<int> v(n);

	for(int i=0; i<n; i++){
		cin>>v[i];
	}
	cin>>a>>b;

	v.insert(v.begin()+a,b );

	for(int i=0; i<v.size(); i++){
		cout<<v[i]<<" ";
			} 
	
}