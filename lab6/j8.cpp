#include <bits/stdc++.h>
#include<vector>
#include <algorithm>

using namespace std;

int main(){
	int n; cin>>n;
	
	

	vector<int> v(n);

	for(int i=0; i<n; i++){
		cin>>v[i];
	}
sort(v.begin(), v.end());

	for(int i=0; i<n; i++){
		cout<<v[n-1]-v[0];
		exit(0);
	}
}
