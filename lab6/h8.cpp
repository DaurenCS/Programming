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

	sort(v.begin(), v.end());



	for(int i=0; i<a; i++){
		cout<<v[i]<<" ";
			} 
	
}