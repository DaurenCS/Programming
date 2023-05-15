#include <bits/stdc++.h>

using namespace std; 

int main(){
	int n; cin>>n;

	set<int> s;

	for(int i=0; i<n; i++){
		int x;
		cin>>x;
		if(!s.count(x)){
			s.insert(x);}
		}
if(n==s.size()){
	cout<<"YES";
}
else 
cout<<"NO";

		}

			
	

			
	
