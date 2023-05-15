#include<bits/stdc++.h>

using namespace std;

int main(){
   int n; cin>>n;

   map<int,int> m;

   for(int i=0; i<n; i++){
      int x;
      cin>>x;
      m[x]++;
   }
   vector<pair<int,int>> v(m.begin(),m.end());

 cout<<v[1].second;
   }
