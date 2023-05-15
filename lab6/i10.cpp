#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;cin>>n;
	vector<int> v1(n);
	vector<int> v2(n);
	int s;

	for(int i=0; i<n; i++){
        int x; 
        cin>>x;
	   v1[i]=x;
		v2[i]=v1[i];

	}
	reverse(v1.begin(),v1.end());
	for(int i=0; i<n; i++){
		if(v2[i]==v1[i]){
			cout<<"OK"<<endl;
		}
		else
		  cout<<"Instead of "<<v2[i]<<" "<<"here was "<<v1[i]<<endl;
        }

}