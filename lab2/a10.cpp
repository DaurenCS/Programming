#include<bits/stdc++.h>

using namespace std;

int main(){
	int n; cin>>n;
	int a[n];

	vector< pair<string, int> > v(n);
	

	for(int i=0; i<n; i++){
		string s;
		int x;
		cin>>s>>x;
          a[i]=x;
		v[i]=make_pair(s,x);
}
 sort(v.begin(), v.end());
 sort(a,a+n);

for(int i=0; i<n; i++){

		cout<<v[i].first<<" "<<a[i]<<endl;
		
}
}

	

	
