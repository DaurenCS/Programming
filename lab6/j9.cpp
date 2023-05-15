#include<bits/stdc++.h>

using namespace std;

int main(){
  int n,a; cin>>n;

  map<string, int> m;

  for(int i=0; i<n; i++){
    string s;
    cin>>s>>a;
    m[s]+=a;
  }

  for(auto p : m){
    cout<<p.first<<" "<<p.second<<endl;
  }
}