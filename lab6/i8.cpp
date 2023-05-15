#include <bits/stdc++.h>
#include<vector>
#include <algorithm>

using namespace std;

int main(){
	int n; cin>>n;
	int a;
	

	vector<int> v(n);

	for(int i=0; i<n; i++){
		cin>>v[i];
	}
	cin>>a;
if(find(v.begin(), v.end(), a)!=v.end()){
      cout<<"Yes";
}

else 
   cout<<"No";



	
	
}