#include<bits/stdc++.h>

using namespace std;

int main(){
	int n; 
	cin>>n;
	
	map<string, int> v;
	for(int i=0; i<n; i++){
      string s;
      cin>>s;
      if(v.count(s)==0){
      	v[s]=1;
      	cout<<"new user added"<<endl;
      }
      else
      	cout<<"user already exists"<<endl;
    
	}
	
	
}