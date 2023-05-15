#include <bits/stdc++.h>

using namespace std;

vector<int> v1;

int fun(string v){
     if(v=="ONE"){
          
         v1.push_back(1);
      }
      if(v=="TWO"){
         
         v1.push_back(2);
      }
      if(v=="THR"){
         
         v1.push_back(3);
      }
      if(v=="FOR"){
         
         v1.push_back(4);
      }
      if(v=="FIV"){
         
         v1.push_back(5);
      }
      if(v=="SIX"){
         
         v1.push_back(6);
      }
      if(v=="SEV"){
         
         v1.push_back(7);
      }
      if(v=="EIG"){
         
         v1.push_back(8);
      }
      if(v=="NIN"){
         
         v1.push_back(9);
      }
      if(v=="ZER"){
         
         v1.push_back(0);
      }
   }

int main(){
   string s;
   cin>>s;
   vector<int> v;
  for(int i=0; i<s.size(); i+=3){
   string str1 = s.substr(i,3);
   fun(str1);
  
}
 int sum=0;
 int ind=v1.size()-1;
for(int i=0; i<v1.size(); i++){

  sum+=v1[i]*pow(10,ind);
  ind-=1;
  
  

}
cout<<sum+1;



}