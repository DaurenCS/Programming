#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

	string x;
	cin>>x;

	int s=x.size();

	for(int i=0; i<x.size(); i++){

		s=s-1;

		if(x[s]!=x[i] ){
			cout<<"YES";

			return 0;
		}
}

cout<<"NO";

}