#include<bits/stdc++.h>

using namespace std;

int main(){
	int x,y,n;
	cin>>n;
	vector< pair<int, int> > v(n);

	for(int i=0; i<n; i++){
		cin>>x>>y;
		v[i]= make_pair(x,y);

	}
	sort(v.begin(), v.end());
	for(int i=0; i<n; i++){
		cout<<v[i].first<<" "<<v[i].second<<endl;
	}
}