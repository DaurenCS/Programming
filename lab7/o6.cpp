#include<iostream>

using namespace std;

void fun(string s){
  int t=0;
  for(int i=0; i<s.size(); i++){
       t+= (int)s[i]-48;
      
  }
  
 
       if(t%(int)(s[s.size()-1]-48)==0){
       	cout<<"Yes";
       	exit(0);
      }
      else cout<<"No";
      exit(0);
  }




int main(){
	string s;

	cin>>s;

	fun(s);
}