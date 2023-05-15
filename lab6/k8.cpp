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
sort(v.begin(), v.end());
int sum=0;
	for(int i=v.size()-a; i<v.size(); i++){
		sum += v[i];
		}
		cout<<sum;
}