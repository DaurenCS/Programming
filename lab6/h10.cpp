#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
 vector<int> v;
 set<int> s;
 for(int i=0 ; i<n; i++){
    int a,x;
    cin>>a;
    x=s.size();
    s.insert(a);
    if(x!=s.size()){
        v.push_back(a);
    }
 
 }


      

do{
  for(int i=0; i<v.size(); i++){
      
    cout<<v[i]<<" ";
   }
   cout<<endl;
}
    while (next_permutation(v.begin(),v.end()));
  
}

