#include<bits/stdc++.h>

using namespace std;

string fun(int index, int arr[], int find , int s ){
  
  if(index==s-1 && arr[index]!=find){
  	return "No";
  }
  	if(arr[index]==find){
  		return "Yes";
  	}
  	return fun(index+1, arr, find, s );
  	
  }
  	
int main(){
	int s;
	cin>>s;

	int arr[s];

	for(int i=0; i<s; i++ ){
		cin>>arr[i];
	}

	int find;
	cin>>find;
	


	cout<<fun(0,arr,find,s);
}