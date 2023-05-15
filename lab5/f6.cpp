#include <bits/stdc++.h>

using namespace std;

void fun(string s, int x){
int cont=0;
	for(int i=0; i<s.size(); i++){
		if(isdigit(s[i])){

			cont++;

		}
	}

	if(cont>=x){
		cout<<"YES";
	}
	else cout<<"NO";

}

int main(){
	string s;
	int x;

	cin>>s;

	cin>>x;

	fun(s,x);
}