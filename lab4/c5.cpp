#include <iostream>
using namespace std;
int main(){
string s;
char t;
cin>>s>>t;
int cont=0;
for(int x=0; x <s.size(); x++){
  if(s[x]==t){
    cont++;
}
}
	
cout<<cont;





}