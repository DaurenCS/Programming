#include <bits/stdc++.h>

using namespace std; 

int gcd(int a, int b){
	if(b==0){
		return a;
	}
	return gcd(b, a%b);
}

int main(){
	int a,b,ind;
	vector<int> v;

	cin>>a>>b>>ind;

	int g=gcd(a,b);

	for(int i=1; i<=g/2; i++){
      if(g%i==0){
      	v.push_back(i);
      }

	}
	v.push_back(g);

	reverse(v.begin(), v.end());

	cout<<v[ind-1];
}