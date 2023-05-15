#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

int main(){
	char c;
	double n; cin>>n>>c;

	if(c=='k'){
		int a; double s;
		cin>>a;
		s=n/1024;
		 cout<< fixed <<showpoint;
		 cout<<setprecision(a)<<s;
	}

	else 
		cout<<n*1024;


}