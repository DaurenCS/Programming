#include<bits/stdc++.h>
 
using namespace std; 

int main(){
	int n;
	cin>>n; 
    vector< pair<string, string> > v1(n);

	for(int i=0; i<n; i++ ){
		string a,b;
		cin>>a>>b;
		v1[i]=make_pair(a,b);
	}

	int x;
	cin>>x;
	vector< pair<string, string> > v2(x);
for(int j=0 ; j<x; j++){
	string c,d;
	cin>>c>>d;
	v2[j]=make_pair(c,d);

}
for(int j=0; j<x; j++){
	for(int i=0 ; i<n; i++){
		
			if(v2[j].first==v1[i].first ){

				if(v2[j].second!=v1[i].second){
				cout<<"password error"<<endl;
				break;

			}
			else {
				cout<<"correct password"<<endl;
                break;
				}
			}
			

		}
		cout << "login error"<<endl;
		
	}
}