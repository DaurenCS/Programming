#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	double per,sum=0;
	cin>>n;
	map<string, double> m;

	for(int i=0; i<n; i++){
		int x;
		cin>>x;
		for(int j=0; j<x; j++){
			string s;
			int a;
			cin>>s>>a;
			sum+=a;
			per=100/sum;
			m[s]+=a;

          
		}
	}

	for(auto p : m){
	cout<<p.first<<" "<<p.second*per<<endl;

	}
}