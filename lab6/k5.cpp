#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

	string x;
	cin>>x;
int cont=0;
for(int i=0; i<x.size(); i++){
 if(x[i]=='a'|| x[i]=='e' || x[i]=='i' || x[i]=='o' || x[i]=='u' ){
cont++;
 }
}

cout<<cont;








}