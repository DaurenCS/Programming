#include<bits/stdc++.h>

using namespace std;

void fun(string s, int n){
int cont=0;
	for(int i=0; i<s.size(); i++){
		if(int(s[i])>=48 && int(s[i])<=57){
			cont++;
			if(cont==n ){
				cout<<"Valid";
				exit(0);
			}

		}
		else cont=0;

	}
	cout<<"Not valid";


}

int main(){
	string s;
	int n;

	cin>>s>>n;

	fun(s,n);
}
