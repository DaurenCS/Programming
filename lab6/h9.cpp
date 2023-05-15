#include<bits/stdc++.h>
#include<map>

using namespace std;

int main(){
	int n;
	cin>>n;
	 string s;
	 int p=1;
	 
	map< string, int> m;
	for(int i =1; i<=n; i++){
        cin>>s;

        if(m.count(s)==0){
        	m[s]=i;
        }
        
	}



	for(auto x : m){
		
		cout<<x.first<<" "<<x.second<<endl;
	}
}


