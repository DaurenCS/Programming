#include <bits/stdc++.h>
#include<set>
#include <algorithm>

using namespace std;

int main(){
	string n; cin>>n;
	
	set<char> s;

	for(int i=0; i<n.size(); i++){
		if(n[i]>=65 && n[i]<=90 ){
			n[i]=n[i]+32;}
		s.insert(n[i]);
		}
 cout<<s.size()<<endl;

set<char>::iterator i=s.begin();
while(i!=s.end()){
 
 cout<<*i<<" ";
 

i++;
}
}

		
