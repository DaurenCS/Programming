#include<bits/stdc++.h>

using namespace std;

int main(){

  int a;cin>>a;
  vector<int> v1;
  vector<int> v2;
  

  for(int i=0; i<a; i++){
  	int x;
  	cin>>x;
  	if(x%2==0){
  		v1.push_back(x);
     }
     else
     	v2.push_back(x);

  }
  sort(v1.begin(),v1.end());
  reverse(v1.begin(), v1.end());

  sort(v2.begin(), v2.end());

  for(int it : v1){
  	cout<<it<<" ";
  }
  for(int it : v2){
  	cout<<it<<" ";
  }





}