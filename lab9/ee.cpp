#include<iostream>

using namespace std;

  int main(){
 int x;cin>>x;
int  a[x];

for(int i=0; i<x; ++i){
cin>>a[i];}

long long sum=0;
for(int i=0; i<x; ++i){

 
  sum+=a[i];



}
cout<< sum;
}