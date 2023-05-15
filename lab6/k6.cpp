#include<bits/stdc++.h>

using namespace std;

void fun(string  x){

	int t=0;
 for(int i=0; i<x.size(); i++  ){
    t+=(int)x[i]-48; 
 }

 cout<<t;


}

int main(){

	string x;

	cin>>x;

	fun(x);
}