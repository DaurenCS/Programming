#include<bits/stdc++.h>

using namespace std; 

int main(){
	int n;
	cin>>n;
	int sum=0;
	int index=((n+1)*n)/2; 

	vector<int> v(index);

	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
      fill(v.begin()+sum,v.begin()+sum+i,i);
	}
	sum+=i;
	}

	for(int i=0; i<v.size(); i++){
		cout<<v[i]<<" ";
	}
}

