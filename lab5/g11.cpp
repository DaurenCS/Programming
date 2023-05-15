#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	map<string, set<int> > m;
  
	for(int i=0; i<n; i++){
		string s;
		int x;
		cin>>s>>x;
		
		m[s].insert(x);
		
         
	}
       

	for(auto p: m){
		cout<<p.first<<" ";
		if(p.second.size()<3){
			cout<<"NO BONUS"<<endl;
		}
		else 
			cout<<"+1"<<endl;
	}
	

}