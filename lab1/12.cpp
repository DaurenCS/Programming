#include <bits/stdc++.h>

using namespace std;

int main(){
	int d,c,n,s;
	cin>>d>>c>>n;
	 int di,ci;
	 cin>>di>>ci;

  s=n*(d*100 +c);
 int o;
 o=(di*100+ci)-s;
   if(s>(di*100+ci)){
   	cout<<"-1";
   	  return 0;
   }
 cout<<o/100<<" "<<o%100;   
}