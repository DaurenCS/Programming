#include<bits/stdc++.h>
 
using namespace std; 


int main(){
	int n;cin>>n;
	int a,b;
int sum;
    
	
	vector<pair<int, int > > v(n);
     for(int i=0; i<n; i++){
     	cin>>a>>b;
     	v[i]=make_pair(a+b,i+1);
     }	

     sort(v.begin(), v.end());

	
for(auto x : v ){
	cout<<x.second<<" ";
}



}