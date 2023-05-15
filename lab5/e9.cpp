#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;

	map<string, int > M;
	for(int i=0; i<n; i++){
		string x;
		cin>>x;
		M[x]++;
	}

	int ans=0;
	for(auto p : M){
		if(p.second==3){
			ans++;
		}
	}
	cout<<ans;
}