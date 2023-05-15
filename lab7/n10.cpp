#include <bits/stdc++.h>

using namespace std;

bool ispal(vector<int> v){
  for(int i=0; i<v.size()/2; i++){
     if(v[i]!=v[v.size()-1-i])
      return 0;
    
       
  }
  return 1;
}

int main(){
  int n; cin>>n;

  vector<int> v;
  for(int i=0; i<n; i++){
   int x; cin>>x;
    v.push_back(x);
  }
  sort(v.begin(),v.end());

  do{
    if(ispal(v)){
      for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
      }
        return 0;
      
    }
}

    while(next_permutation(v.begin(),v.end()));

    cout<<"Impossible";

  
}