#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	int a;
	char x;
	int cont=0;
	cin>>s>>x>>a;
for(int i=0; i<s.size(); i++){
	if(s[i]==x){

		cont++;

	}

}
	 
		if(cont==a){
			cout<<"YES";
		}
		else if(cont!=a){cout<<"NO";}

	
}
