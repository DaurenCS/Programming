#include <bits/stdc++.h>
#include<vector>

using namespace std;

int main(){
	int n; cin>>n;
	int a;
	

	vector<int> v(n);

	for(int i=0; i<n; i++){
		cin>>v[i];
	}
	cin>>a;

	v.erase(v.begin()+a,v.begin()+a+1);

	for(int i=0; i<v.size(); i++){
		cout<<v[i]<<" ";
			} 
	
}