#include<bits/stdc++.h>

using namespace std;

int main(){
	map<int, int> M;
	int n; cin>>n;
	for(int i=0; i<n; i++){
		int x; 
		cin>>x;
		M[x]++;
		

	} 
	
	int ans=0;
	for(auto p : M ){
		if(p.second>=2){
			ans++;
		}
	}
	cout<<ans;
}