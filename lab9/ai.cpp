#include<iostream>
using namespace std;
int main(){
    int ind1,ind2;
    long long x; cin>>x>>ind1>>ind2;
    int a[x];

        for(int i=0; i<x; ++i){
        cin>>a[i];
    }   
if(ind1==1){
for(int i=x-1; i>=0; --i){
cout<<a[i]<<" ";
}
}
  else{  for(int i=0; i<x; ++i){
long long temp=a[ind2-1];
a[ind2-1]=a[ind1-1];
a[ind1-1]= temp;
}
    for(int i=0; i<x; ++i){


cout<<a[i]<<" ";
}}
}
