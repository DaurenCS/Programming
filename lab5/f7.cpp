#include<bits/stdc++.h>

using namespace std;

void fun(string a, int index, int cont){
	if(index== a.size()){
		
		cout<<cont;
		return;
	}
	
	if((a[index]-'0')%2==0){
		cont++;
		fun(a,index+1,cont);
		return;
	}
	fun(a,index+1,cont);
	return;
	
	
}

int main(){
	int b;
	string a;
	cin>>a;
	int cont=0;

	fun(a,0,cont);
}
