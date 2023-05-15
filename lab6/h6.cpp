#include<bits/stdc++.h>

using namespace std;

void fun(string x){
 for(int i=0; i<x.size(); i++){
 	if( ((int)x[i]-48)%2!=0 ){
 		cout<<"Not valid";
 		exit(0);
 	}
 }
cout<<"Valid";
exit(0);

}

int main(){

	string x;

	cin>>x;

	fun(x);
}