#include<bits/stdc++.h>
#include<vector>

using namespace std;

int main(){
    
   int n; cin>>n;
   int k; cin>>k;
   vector<int> v(n);
   
   for(int i=0; i<n; i++){
    cin>>v[i];
   } 
int cont=0;
 for(int i=0; i<n; i++){
    if(v[i]==k){
    	cont++;
    }
   } 

   cout<<cont;












}