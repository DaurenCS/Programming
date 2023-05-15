#include <bits/stdc++.h>

using namespace std;

int main(){
	int n; cin>>n;
	map<pair<string,int >, int> m;

	for(int i=0; i<n; i++){
      string a,b; 
      int x,y;

      cin>>a>>x>>b>>y;

      pair<string, int> p= make_pair(a+ " and " +b, x+y );

      m[p]=1;

	}

	for(map<pair<string, int>, int>::iterator it=m.begin(); it!=m.end(); it++){

		cout<<it->first.first<<" "<<it->first.second<<endl;

	}
}
  
	