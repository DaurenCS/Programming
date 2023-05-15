#include<bits/stdc++.h>

using namespace std;

int main(){
    int m,n;
    cin>>m>>n;

    vector<int> v1;
    vector<int> v2;

    for(int i=0; i<m; i++){
        int a;
        cin>>a;
        v1.push_back(a);
    }
    for(int j=0; j<n; j++){
        int b; cin>>b;
        v2.push_back(b);
    }
   vector<int>::iterator i1;
   vector<int>::iterator i2;
   i1=unique(v1.begin(),v1.end());
   i2=unique(v2.begin(),v2.end());
   v1.resize(distance(v1.begin(),i1));
   v2.resize(distance(v2.begin(),i2));
    
    vector<int> v(v1.size()+v2.size());
    for(int i=0; i<v.size(); i+=2){
        v[i]=v1[i/2];
    }
    for(int i=1; i<v.size(); i+=2){
        v[i]=v2[i/2];
    }

    vector<int>:: iterator i;

    i=unique(v.begin(),v.end());
    v.resize(distance(v.begin(),i));

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
 




}